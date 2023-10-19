#include "main.h"

/**
 * rev_string - reverse array
 * @n: The integer parameter
 * Return: 0
 */

void rev_string(char *n)
{
	int a = 0;
	int c = 0;
	char temp;

	while (*(n + a) != '\0')
	{
		a++;
	}
	a--;

	for (c = 0; c < a; c++, a--)
	{
		temp = *(n + c);
		*(n + c) = *(n + a);
		*(n + a) = temp;
	}
}

/**
 * infinite_add - This function adds two numbers
 * @n1: The first parameter
 * @n2: The scond parameter
 * @r: The third parameter
 * @size_r: The fourth parameter
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over = 0, a = 0, c = 0, digits = 0;
	int s1 = 0, s2 = 0, temp_tot = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + c) != '\0')
		c++;
	a--;
	c--;
	if (c >= size_r || a >= size_r)
		return (0);
	while  (c >= 0 || a >= 0 || over == 1)
	{
		if (a < 0)
			s1 = 0;
		else
			s1 = *(n1 + a) - '\0';
		if (c < 0)
			s2 = 0;
		else
			s2 = *(n2 + c) - '\0';
		temp_tot = s1 + s2 + over;
		if (temp_tot >= 10)
			over = 1;
		else
			over = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '\0';
		digits++;
		c--;
		a--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
