#include <stdio.h>

/**
 * main - This function print its name
 * @argc: The first parameter of the function
 * @argv: The second parameter of the function
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
