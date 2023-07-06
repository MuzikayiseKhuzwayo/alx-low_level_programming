#include "main.h"

/**
 * get_endianness - checks the system endianness
 *
 * Description: create a check memory value of 1
 *				set variable's pointer to the memory value
 *				return the int converted value of the first memory address
 *
 * Return integer: 0 if big endian. 1 if little endian
 */
int get_endianness(void)
{
	unsigned int chk = 1;
	char *a = (char *)&chk;

	return ((int)*a);
}
