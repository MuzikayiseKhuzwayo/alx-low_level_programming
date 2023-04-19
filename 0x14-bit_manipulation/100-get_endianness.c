#include "main.h"

/**
 * get_endianness - check the endianness
 *
 * Description: Big and Little Endian are formats for storing data
 *				the differentiation betwen the two is where the
 *				least significant bit is stored
 *				define a value, then check which byte is stored first when
 *				being pointed to
 *				if the pointer is taking tha last byte, then little endian
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned long int temp_val = 0x12345678;
	char *c;

	c = (char *)(&temp_val);

	if (*c == 0x78)
		return (1);
	return (0);
}
