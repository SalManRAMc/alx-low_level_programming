#include "main.h"

/**
 * *_memset - fills memory space s with a constant input till 
 * the nth byte
 * @s: pointer to put constant in
 * @b: constant
 * @n: max bytes to use
 *
 * Return: returns s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
}
