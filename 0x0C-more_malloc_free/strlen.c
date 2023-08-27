#include "main.h"
#include <stdio.h>

/**
 * strlen - counts number of characters in string
 *
 * @*s: string 
 *
 * Return: number of characters (minus \n)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++ != '\n')
	{
		length++;
	}
	return length;
}
