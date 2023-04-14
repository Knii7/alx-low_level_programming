#include "main.h"

/**
* read_textfile - read a text file and print te lettrs
* @filmn: filmn.
* @lettrs: numbs of lettr printd
*
* Return: numbs of lettr printd It fails, returns 0.
*/
ssize_t read_textfile(const char *filmn, size_t lettrs)
{
	int fdd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filmn)
	return (0);

	fdd = open(filmn, O_RDONLY);

	if (fdd == -1)
	return (0);

	buf = malloc(sizeof(char) * (lettrs));
	if (!buf)
	return (0);

	nrd = read(fdd, buf, lettrs);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fdd);

	free(buf);

	return (nwr);
}

