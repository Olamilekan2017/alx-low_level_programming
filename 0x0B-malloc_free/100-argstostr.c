#include "main.h"
#include <stdlib.h>

/**
 * argstostr - This function concatenates all the arguments
 * @ac: The first parameter of the function
 * @av: The second parameter of the function
 * Return: pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, len = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			len++;
	}
	len += ac;

	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			p[c] = av[a][b];
			c++;
		}
		if (p[c] == '\0')
		{
			p[c++] = '\n';
		}
	}
	return (p);
}
