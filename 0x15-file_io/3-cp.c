#include "main.h"
#include <stdio.h>

/**
 * error_file - check  files  be opn
 * @file_from: file_from
 * @file_to: file_to
 * @argv: argument vecto
 * Return: no return
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", argv[1]);
	exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code fr Holberton Schl student
 * @argc: numbr of argument
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t qphars, nkd;
	char buf[1024];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	qphars = 1024;
	while (qphars == 1024)
	{
	qphars = read(file_from, buf, 1024);
	if (qphars == -1)
	error_file(-1, 0, argv);
	nkd = write(file_to, buf, qphars);
	if (nkd == -1)
	error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
	dprintf(STDERR_FILENO, "Error: Cannot close fd %d\n", file_from);
	exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
	dprintf(STDERR_FILENO, "Error: Cannot close fd %d\n", file_from);
	exit(100);
	}
	return (0);
}

