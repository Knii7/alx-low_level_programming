#include "main.h"

/**
 * create_file - creates  file
 * @filename: filename
 * @text_content: content writ in  file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fdd;
	int qlettrs;
	int nkd;

	if (!filename)
	return (-1);

	fdd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdd == -1)
	return (-1);

	if (!text_content)
	text_content = "";

	for (qlettrs = 0; text_content[qlettrs]; qlettrs++)
	;

	nkd = write(fdd, text_content, qlettrs);

	if (nkd == -1)
	return (-1);

	close(fdd);
	return (1);
}

