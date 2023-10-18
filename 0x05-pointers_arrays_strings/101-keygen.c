#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This function generates random valid password
 * Return: 0
 */

int main(void)
{
	int i;
	char password[10] = "";

	srand(time(NULL));

	for (i = 0; i < 9; i++)
	{
		password[i] = rand() % 96 + 32;
	}

	printf("%s\n", password);

	return (0);
}
