#include "main.h"

/**
 * _strlen_recursion - finds out string length through recursion
 *
 * @s: String input
 *
 * Return: Number of characters in string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count = 1 + _strlen_recursion(s + 1);
	}
	return (count);
}
