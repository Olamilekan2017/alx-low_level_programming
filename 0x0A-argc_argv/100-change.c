#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function prints coins
 * @argc: The first larameter
 * @argv: The second parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, coin;

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			coin += 1;
		}
		printf("%d\n", coin);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
