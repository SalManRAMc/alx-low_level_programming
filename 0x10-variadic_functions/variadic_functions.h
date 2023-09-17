#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct format - Struct format
 *
 * @token: format token
 * @f: the function associated
 */
typedef struct format
{
	char *token;
	void (*f)(char *, va_list);
} formtoken;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
