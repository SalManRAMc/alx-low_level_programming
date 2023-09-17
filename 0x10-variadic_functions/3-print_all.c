#include "variadic_functions.h"

/**
 * printchar - prints a character
 *
 *@letter: letter argument to be printed
 */

void printchar(va_list letter)
{
	char c = va_arg(letter, int);

	printf("%c", c);
}

/**
 * printdecimal - prints integers
 *
 *@num: number argument to be printed
 */

void printdecimal(va_list num)
{
	int i = va_arg(num, int);

	printf("%d", i);
}

/**
 * printfloat - prints a floating number
 *
 * @numf: float number passed from list
 */

void printfloat(va_list numf)
{
	float f = va_arg(numf, double);

	printf("%f", f);
}

/**
 * printstring - prints a string, if string is null, print (nil)
 *
 * @string: string to be printed
 */

void printstring(va_list string)
{
	char *str = va_arg(string, char *);

	if (!str)
		printf("nil");

	printf("%s", str);
}
/**
 * print_all - prints stuff given to it
 *
 * @format: constant string of format
 * @...: indefinite args
 *
 */

void print_all(const char * const format, ...)
{
	formtoken f[] = {
		{'c', printchar},
		{'i', printdecimal},
		{'f', printfloat},
		{'s', printstring},
		{'\0', NULL}
	};
	va_list params;
	void (*summonprint)(va_list);
	int i = 0, j = 0;

	va_start(params, format);

	while (format[i] != '\0')
	{
		while (f[j].token != '\0')
		{
			if (f[j].token == format[i])
			{
				summonprint = f[j].funcall;
				summonprint(params);
			}
			j++;
		}
		j = 0;
		i++;
	}

	va_end(params);
	printf("\n");
}
