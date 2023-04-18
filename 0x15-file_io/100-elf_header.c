#include "main.h"
#include <elf.h>

/**
 * _open - open a file using it's filename and modes, print error on fail
 * @file: path to file
 * @mode: modes of file
 *
 * Return: file descriptor if passed, exit if failed
 */
int _open(const char *file, int mode)
{
	int fd;

	fd = open(file, mode);
	if (fd == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}
	return (fd);
}

/**
 * _close - close a file descriptor, print error message if failed
 * @fd: the file descriptor to close
 */
void _close(int fd)
{
	if (close(fd) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't close fd\n", 22);
	exit(98);
}

/**
 * _read - read from a file and print an error message on fail
 * @fd: the file descriptor to read from
 * @buf: the buffer to write to
 * @count: the number of bytes to read
 */
void _read(int fd, char *buf, int count)
{
	if (read(fd, buf, count) != -1)
		return;
	write(STDERR_FILENO, "Error: Can't read from file\n", 28);
	_close(fd);
	exit(98);
}

/**
 * _strncmp - compare two strings based on max bytes
 * @string_one: the first string
 * @string_two: the second string
 * @bytes: the max number of bytes to compare
 *
 * Return: 0 if the first n bytes are equal, otherwise non-zero
 */
int _strncmp(const char *string_one, const char *string_two, int bytes)
{
	for (; bytes && *string_one && *string_two;
		 --bytes, ++string_one, ++string_two)
	{
		if (*string_one != *string_two)
			return (*string_one - *string_two);
	}
	if (bytes)
	{
		if (*string_one)
			return (1);
		if (*string_two)
			return (-1);
	}
	return (0);
}

/**
 * elf_magic - print ELF magic values
 * @buffer: the ELF header
 */
void elf_magic(const char *buffer)
{
	unsigned int i;

	if (_strncmp((const char *)buffer, ELFMAG, 4))
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		exit(98);
	}

	printf("ELF Header:\n  Magic:   ");

	for (i = 0; i < 16; ++i)
		printf("%02x%c", buffer[i], i < 15 ? ' ' : '\n');
}

/**
 * elf_class - print ELF class return bit mode
 * @buffer: the ELF header
 *
 * Return: bit mode (32 or 64)
 */
int elf_class(const char *buffer)
{
	printf("  %-34s ", "Class:");

	if (buffer[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	if (buffer[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
	printf("<unknown: %x>\n", buffer[EI_CLASS]);
	return (32);
}

/**
 * elf_data - print ELF data, and return endianness
 * @buffer: the ELF header
 *
 * Return: 1 if big endian, otherwise 0
 */
int elf_data(const char *buffer)
{
	printf("  %-34s ", "Data:");

	if (buffer[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
		return (1);
	}
	if (buffer[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
		return (0);
	}
	printf("Invalid data encoding\n");
	return (0);
}

/**
 * elf_version - print ELF version to standard out
 * @buffer: the ELF header
 *
 * Return: NOTHING
 */
void elf_version(const char *buffer)
{
	printf("  %-34s %u", "Version:", buffer[EI_VERSION]);

	if (buffer[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * elf_os_abi - print ELF OS/ABI to stdout
 * @buffer: the ELF header
 *
 * Return: Nothing
 */
void elf_os_abi(const char *buffer)
{
	const char *os_table[19] = {
		"UNIX - System V",
		"UNIX - HP-UX",
		"UNIX - NetBSD",
		"UNIX - GNU",
		"<unknown: 4>",
		"<unknown: 5>",
		"UNIX - Solaris",
		"UNIX - AIX",
		"UNIX - IRIX",
		"UNIX - FreeBSD",
		"UNIX - Tru64",
		"Novell - Modesto",
		"UNIX - OpenBSD",
		"VMS - OpenVMS",
		"HP - Non-Stop Kernel",
		"AROS",
		"FenixOS",
		"Nuxi CloudABI",
		"Stratus Technologies OpenVOS"};

	printf("  %-34s ", "OS/ABI:");

	if (buffer[EI_OSABI] < 19)
		printf("%s\n", os_table[(unsigned int)buffer[EI_OSABI]]);
	else
		printf("<unknown: %x>\n", buffer[EI_OSABI]);
}

/**
 * elf_abi_version - print ELF ABI version to stdout
 * @buffer: the ELF header
 *
 * Return: Nothing
 */
void elf_abi_version(const char *buffer)
{
	printf("  %-34s %u\n", "ABI Version:", buffer[EI_ABIVERSION]);
}

/**
 * elf_type - print ELF type to standard out
 * @buffer: the ELF header
 * @endian: endianness (big endian if non-zero)
 *
 * Return: Nothing
 */
void elf_type(const char *buffer, int endian)
{
	char *type_table[5] = {
		"NONE (No file type)",
		"REL (Relocatable file)",
		"EXEC (Executable file)",
		"DYN (Shared object file)",
		"CORE (Core file)"};
	unsigned int type;

	printf("  %-34s ", "Type:");

	if (endian)
		type = 0x100 * buffer[16] + buffer[17];
	else
		type = 0x100 * buffer[17] + buffer[16];

	if (type < 5)
		printf("%s\n", type_table[type]);
	else if (type >= ET_LOOS && type <= ET_HIOS)
		printf("OS Specific: (%4x)\n", type);
	else if (type >= ET_LOPROC && type <= ET_HIPROC)
		printf("Processor Specific: (%4x)\n", type);
	else
		printf("<unknown: %x>\n", type);
}

/**
 * elf_entry_addr - print entry point address
 * @buffer: string containing the entry point address
 * @mode: bit mode (32 or 64)
 * @endian: endianness (big endian if non-zero)
 *
 * Return: Nothing
 */
void elf_entry_addr(const char *buffer, int mode, int endian)
{
	int address_size = mode / 8;

	printf("  %-34s 0x", "Entry point address:");

	if (endian)
	{
		while (address_size && !*(buffer))
			--address_size, ++buffer;

		printf("%x", *buffer & 0xff);

		while (--address_size > 0)
			printf("%02x", *(++buffer) & 0xff);
	}
	else
	{
		buffer += address_size;

		while (address_size && !*(--buffer))
			--address_size;

		printf("%x", *buffer & 0xff);

		while (--address_size > 0)
			printf("%02x", *(--buffer) & 0xff);
	}

	printf("\n");
}

/**
 * main - display the elf header info of an input file
 * @argc: the argument count
 * @argv: the argument values
 *
 * Return: 0 (success), always 0
 */
int main(int argc, const char *argv[])
{
	int fd;
	unsigned int endian, mode;
	char buffer[18];

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}

	fd = _open(argv[1], O_RDONLY);
	_read(fd, buffer, 18);

	elf_magic(buffer);
	mode = elf_class(buffer);
	endian = elf_data(buffer);
	elf_version(buffer);
	elf_os_abi(buffer);
	elf_abi_version(buffer);
	elf_type(buffer, endian);
	lseek(fd, 24, SEEK_SET);
	_read(fd, buffer, mode / 8);
	elf_entry_addr(buffer, mode, endian);

	_close(fd);

	return (0);
}
