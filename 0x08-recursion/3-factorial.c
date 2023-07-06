#include "main.h"

/**
 * factorial - returns factoriral
 *
 * @n: starting number
 *
 * Return: factorial of n
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
