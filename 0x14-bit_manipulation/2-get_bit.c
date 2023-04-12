#include "main.h"

/**
 * get_bit - return the value of a bit at an indx in a deci numb.
 * @n: numb. to search
 * @index: indx of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
	return (-1);

	bit_val = (n >> index) & 1;
	return (bit_val);
}

