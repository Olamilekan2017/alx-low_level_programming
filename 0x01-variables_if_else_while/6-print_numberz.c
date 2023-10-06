#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints char below 10
 * Return: 0
 */

int main(void)
{

	int b;

	for (b = 0; b < 10; b++)
	{
	putchar(b + '0');
	}
	putchar('\n');
	return (0);
}
