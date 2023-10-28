#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function multiplies two programs
 * @argc: The first parameter of this function
 * @argv: The second parameter of this function
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
