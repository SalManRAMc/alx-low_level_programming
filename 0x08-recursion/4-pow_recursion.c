#include "main.h"

/**
 * _pow_recursion - power function done through recursion
 * @x: base integer
 * @y: power integer
 * Return: Value of X to the power of y, if y less than 0, return -1
*/

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	else
		return (-1);
}
