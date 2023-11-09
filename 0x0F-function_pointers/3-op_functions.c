#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - This function returns the sum of a and b
 * @a: The first parameter of the function
 * @b: The second parameter of the function
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This function returns the difference of a and b
 * @a: The first parametr of the function
 * @b: The second parameter of the function
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This function returns the product of a and b
 * @a: The first parameter of the function
 * @b: The econd parameter of the function
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This function returns the division of a by b
 * @a: The first parametr of the function
 * @b: The second parameter of the function
 * Return: division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - This function returns the remainder of a by b
 * @a: The first parameter of the function
 * @b: The second parameter of the function
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
