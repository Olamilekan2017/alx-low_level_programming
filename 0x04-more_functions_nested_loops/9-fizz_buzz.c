#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five points buzz
 * Return: 0
 */

int main(void)
{

	int b;

	for (b = 1; b <= 100; b++)
	{
		if (b % 3 == 0 && b % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (b % 5 == 0 && b % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (b % 3 == 0 && b % 5 == 0)
		{
			printf("Fizzbuzz");
		}
		else if (b == 1)
		{
			printf(" %d", b);
		}
		else
		{
			printf(" %d", b);
		}
	}
	printf("\n");

	return (0);
}
