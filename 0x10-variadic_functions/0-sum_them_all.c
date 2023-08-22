#include "variadic_functions.h"

/**
 * sum_them_all - adds up all the given arguments
 *
 * @n: number of integers to be added
 * @...: numbers going to be added
 *
 * Return: if n = 0, otherwise return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int counter = n, sum = 0;
	va_list numbers;

	if (!n)
		return (0);
	va_start(numbers, n);
	while (counter--)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
