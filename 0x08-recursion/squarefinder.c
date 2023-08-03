#include "main.h"

/**
 * squarefinder - Finds square root of a given integer
 *
 * @n: Integer who's number is to be found
 * @i: iteration
 *
 * Return: square root or negatice number
 */

int squarefinder(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (squarefinder(n, i + 1);
	else
		return (-1);
}
