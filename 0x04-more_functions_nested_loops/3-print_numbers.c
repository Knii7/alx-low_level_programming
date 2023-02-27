#include <stdio.h>
#include "main"

/**
 * print_numbers - function that print from 0 to 9
 * Return: returns to nothng
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
