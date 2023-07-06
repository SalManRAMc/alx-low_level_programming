#include "main.h"

/**
 * _puts_recursion_index - prints string starting from index 0
 *
 * @s: string to be printed
 * @i: index of string
*/

void _puts_recursion_index(char *s, int i)
{
	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion_index(s, i + 1);
	}
}

/**
 * _puts_recursion - wrapper function
 * @s: string to be printed
*/

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	_puts_recursion_index(s, i);
	_putchar('\n');
}
