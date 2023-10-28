#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This function adds positive numbers
 * @argc: The first parameter of the function
 * @argv: The second parameter of the function
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int add = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}
