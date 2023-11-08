#include <stdio.h>
#include <stdlib.h>

/**
 * opcodes - This prints opcodes of it main function
 * @c: This is the first parameter
 * @n: This is the second parameter
 * Return: void
 */

void opcodes(char *c, int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		printf("%.2hhx", c[a]);
		if (a < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - This is the main function
 * @argc: This is the first parameter
 * @argv: This is the second parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcodes((char *)&main, i);
	return (0);
}
