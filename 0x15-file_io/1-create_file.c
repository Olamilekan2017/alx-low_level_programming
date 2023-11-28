#include "main.h"

/**
 * create_file - This function creates a file
 * @filename: The first parameter
 * @text_content: The second parameter
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int count;
	int rw;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (count = 0; text_content[count]; count++)
		;
	rw = write(fd, text_content, count);
	if (rw == -1)
		return (-1);

	close(fd);

	return (1);
}
