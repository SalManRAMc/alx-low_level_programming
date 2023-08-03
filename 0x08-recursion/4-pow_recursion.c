#include "main.h"

/**
 * _pow_recursion - returns value of x to the power of y. Calculated recursively
 *
 * @x: base number
 * @y: power number
 *
 * Return: Number X to the power of y
 */

int _pow_recursion(int x, int y)
{
	int product = 1;

	if (y < 0)
		return (-1);
	else if (y > 0)
		product = x * _pow_recursion(x, y - 1);
	else
		return (1);
	return (product);
}
