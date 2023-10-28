#include <stdio.h>

/**
 * main - This function prints all arguments
 * @argc: The first parameter of the function
 * @argv: The second parameter of the function
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
