#include "main.h"

/**
 * cap_string - This function capitalizes all words
 * @b: The string of the function
 * Return: void
 */

char *cap_string(char *b)
{
	int total = 0;

	while (b[total])
	{
		while (!(b[total] >= 'a' && b[total] <= 'z'))
			total++;
		if (b[total - 1] == ' ' ||
				b[total - 1] == '\t' ||
				b[total - 1] == '\n' ||
				b[total - 1] == ',' ||
				b[total - 1] == ';' ||
				b[total - 1] == '_' ||
				b[total - 1] == '!' ||
				b[total - 1] == '?' ||
				b[total - 1] == '"' ||
				b[total - 1] == '(' ||
				b[total - 1] == ')' ||
				b[total - 1] == '{' ||
				b[total - 1] == '}' ||
				total == 0)
			b[total] -= 32;
		total++;
	}
	return (b);
}
