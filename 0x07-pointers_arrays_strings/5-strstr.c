#include "main.h"

/**
 * _strstr - This function locates a substring
 * @haystack: The first parameter of the function
 * @needle: The secobd parameter if the function
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *a = needle;

		while (*l == *a && *a != '\0')
		{
			l++;
			a++;
		}
		if (*a == '\0')
			return (haystack);
	}
	return (0);
}
