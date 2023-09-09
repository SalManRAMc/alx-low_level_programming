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

char *_memset(char *s, int b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory like malloc
 *
 * @nmemb: number of elements
 * @size: number of bytes
 *
 * Return: NULL on failure, pointer on success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);

	return (_memset(ar, 0, size));
}
