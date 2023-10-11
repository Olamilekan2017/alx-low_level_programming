#include <stdio.h>

/**
 * main - the main printing function
 * Return: 0
 */

int main(void)
{
	int m = 0;
	long a = 1, b = 2, sum = b;

	while (b + a < 4000000)
	{
		b += a;
		if (b % 2 == 0)
			sum += b;
		a = b - a;
		++m;
	}
	printf("%ld", sum);
	return (0);
}
