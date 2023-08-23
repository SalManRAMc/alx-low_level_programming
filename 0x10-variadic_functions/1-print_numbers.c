#include "variadic_functions.h"

/**
 * print_numbers - prints numbers in a sequence
 *
 * @separator: string separating integers
 * @n: number of integers to be printed
 * @...: integer arguments
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int counter = n;
	va_list printable_numbers;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(printable_numbers, n);
	while (counter--)
	{
			printf("%d%s", va_arg(printable_numbers, int), counter ? (separator ? separator : "") : "\n");
	}
	va_end(printable_numbers);
}
