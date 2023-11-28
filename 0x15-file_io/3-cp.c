#include "main.h"
#include <stdio.h>
void error_create(int file_from, int file_to, char **argv);

/**
 * error_create - This is the error function
 * @file_from: The first parameter
 * @file_to: The second parameter
 * @argv: The third parameter
 */

void error_create(int file_from, int file_to, char **argv)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - This function copies the content of a file to another file
 * @argc: The argument string
 * @argv: The argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int file_from, file_to, error_close;
	ssize_t nchar, nwr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_create(file_from, file_to, argv);

	nchar = 1024;
	while (nchar == 1024)
	{
		nchar = read(file_from, buff, 1024);
		if (nchar == -1)
			error_create(-1, 0, argv);
		nwr = write(file_to, buff, nchar);
		if (nwr == -1)
			error_create(0, -1, argv);
	}
	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant close fd %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
