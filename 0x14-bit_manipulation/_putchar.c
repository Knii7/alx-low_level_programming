#include "main.h"
#include <unistd.h>

/**
* _putchar - writ the character c to stdout
* @c: The charac to print
*
* Return: On success 1.
* On error, -1 is returnd, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

