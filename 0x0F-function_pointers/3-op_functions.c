#include "3-calc.h"

/**
 * op_add - adds two ints
 *
 * @a: first int
 * @b: second int
 *
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of a and b
 *
 * @a: first int
 * @b: second int
 *
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns result of two numbers multiplied by one another
 *
 * @a: First int
 * @b: Second int
 *
 * Return: Result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers by one another
 *
 * @a: first int
 * @b: second int
 *
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf('\n');
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns remainder of division between two nums
 *
 * @a: First int
 * @b: Second int
 *
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf('\n');
		exit(100);
	}
	return (a % b);
}

