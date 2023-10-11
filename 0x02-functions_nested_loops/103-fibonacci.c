#include <stdio.h>

/**
 * main - the main printing function
 * less than 4000000
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int j = 1;
	int k = 2;

	while (k < 4000000)
	{
		if (k % 2 == 0)
		{
			sum += k;
		}
		int next = j + k;

		j = k;
		k = next;
	}
	printf("%d\n", sum);
	return (0);
}
