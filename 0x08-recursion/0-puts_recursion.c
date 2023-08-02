#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 *
 * @s: String to be output
 *
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
