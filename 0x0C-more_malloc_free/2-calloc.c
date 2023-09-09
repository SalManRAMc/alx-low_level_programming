#include "main.h"

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
	int i = 0;
	void *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	while (i < nmemb)
	{
		ar[i] = 0;
		i++;
	}
	return (ar);
}
