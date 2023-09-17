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
	int counter = 0;
	va_list printable_numbers;

	if (!n)
	{
		printf("\n");
		return;
	}	
	va_start(printable_numbers, n);
	
		while (counter < n)
		{
			if (!separator)
				printf("%d", va_arg(printable_numbers, int));
			else
				printf("%d%s\n", separator, va_arg(printable_numbers, int));
			counter++;
		}
	
	va_end(printable_numbers);
}
