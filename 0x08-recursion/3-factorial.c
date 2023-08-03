#include "main.h"

/**
 * factorial - returns factorial product which is calculated recursively
 *
 * @n: integer whose product is to be calculated
 *
 * Return: Factorial Product
 */

int factorial(int n)
{
	int product = 1;

	if (n > 0)
	{
		product = n * factorial(n - 1);
	}
	else if (n < 0)
		product = -1;
	else
		product = 1 * factorial(n - 1);
	return (product);
}
