#include "main.h"

/**
 * flip_bits - count the numb. of bits to change
 * to get from one numb. to anothr
 * @n: 1st numb.
 * @m: 2nd numb.
 *
 * Return: numb. of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
	current = exclusive >> i;
	if (current & 1)
	count++;
	}

	return (count);
}

