#include "main.h"

/**
 * _strlen_recursion - returns string length
 * @s: string
 * @i: number of chars, string length indicator
 * Return: length of string
*/

int _strlen_recursion(char *s)
{	
	int i;

	i = 0;	
	if (*s > '\0')
	{
		i = _strlen_recursion(s + 1);
		i ++;
		return (i);
	}
	return (i);
}
