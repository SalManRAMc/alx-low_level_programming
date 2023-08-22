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

	va_start(printable_numbers, n);
	if (*separator == NULL)
	{
		while (counter--)
		{
			printf("%d", va_arg(printable_numbers, int);
		}
		printf("\n");
		return;
	}
	while (counter--)
	{
		printf("%s%d", *separator, va_arg(printable_numbers, int);
	}
	printf("\n");
}
