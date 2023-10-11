#include <stdio.h>

/**
 * main - prints the first 52 fib
 * Return: 0
 */

int main(void)
{
	int i = 0;
	long m = 1, n = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", m);
		else if (i == 1)
			printf(", %ld", n);
		else
		{
			n += m;
			m = n - m;
			printf(", %ld", n);
		}
		++i;
	}
	printf("\n");
	return (0);
}
