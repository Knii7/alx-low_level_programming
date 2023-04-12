#include "main.h"

/**
 * get_endianness - check if a machine is lit. or biggy endian
 * Return: 0 for biggy, 1 for lit.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

