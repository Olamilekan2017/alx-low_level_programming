#include <stdio.h>
#include <math.h>

/**
 * main - finds and print the largest prime factor
 * Return: 0
 */

int main(void)
{
	long int m;
	long int max;
	long int p;

	m = 612852475143;
	max = -1;

	while (m % 2 == 0)
	{
		max = 2;
		m /= 2;
	}

	for (p = 3; p <= sqrt(m); p = p + 2)
	{
		while (m % p == 0)
		{
			max = p;
			m = m / p;
		}
	}

	if (m > 2)
		max = m;

	printf("%ld\n", max);

	return (0);
}
