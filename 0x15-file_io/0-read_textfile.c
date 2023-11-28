#include "main.h"

/**
 * read_textfile - This function reads a text file
 * @filename: The first parameter
 * @letters: The second parameter
 * Return: number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buff;

	if (filename == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	close(fd);
	free(buff);

	return (w);
}
