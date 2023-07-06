#include "main.h"

/**
 * puts_recursion - prints a string followed by a new line
 *
 * @s: string to be printed
*/

void _puts_recursion_index(char *s, int i;)
{
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion_index(s, i+1);
	}
	_putchar('\n');
}

void _puts_recursion(char *s)
{
	int i;
	i = 0;

	_puts_recursion_index(s, i);
}
