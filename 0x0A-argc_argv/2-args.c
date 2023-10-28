#include <stdio.h>

/**
 * main - This function print all arguments received
 * @argc: The first parameter of the function
 * @argv: The second parameter of the function
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
