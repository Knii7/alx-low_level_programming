#include "main.h"

/**
 * clear_bit - set the value of a given bit to 0
 * @n: pointr to the numb. to change
 * @index: indx of the bit to clr
 *
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

