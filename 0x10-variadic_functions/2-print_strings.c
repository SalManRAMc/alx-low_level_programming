#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: separator
 * @n: number of string args to be passed
 * @...: indefinite number of args
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int n = counter;
	va_list strings;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(strings, counter);
	while (counter--)
	{
		printf("%s%s", (str = va_arg(strings, char *)) ? str : "(nil)",
				counter ? (separator ? separator : "") : "\n");
	}
	va_end(strings);
}
