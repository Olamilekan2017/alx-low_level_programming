#include "unistd.h"

/**
 * _putchar - is function prints at a time
 * @c: The only parameter
 * Return: 1
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
