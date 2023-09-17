#include "variadic_functions.h"

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
		{"c",printchar},
		{"i",printdecimal},
		{"f",printfloat},
		{"s",printstring},
		{NULL,NULL}
	};
	void (*summonprint)(formtoken);

}
