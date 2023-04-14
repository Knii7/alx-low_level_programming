#include "main.h"

/**
 * append_text_to_file - appends text at the end of  file
 * @filename: filename.
 * @text_content: add content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdd;
	int qlettrs;
	int nkd;

	if (!filename)
	return (-1);

	fdd = open(filename, O_WRONLY | O_APPEND);

	if (fdd == -1)
	return (-1);

	if (text_content)
	{
	for (qlettrs = 0; text_content[qlettrs]; qlettrs++)
	;

	nkd = write(fdd, text_content, qlettrs);

	if (nkd == -1)
	return (-1);
	}

	close(fdd);
	return (1);
}

