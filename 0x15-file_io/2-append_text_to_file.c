#include "main.h"

/**
 * append_text_to_file - This function appends text at the end of file
 * @filename: The first parameter
 * @text_content: The second parameter
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (count = 0; text_content[count]; count++)
			;
		wr = write(fd, text_content, count);
		if (wr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
