#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc, status value of 98
 *
 * @b: number of bytes
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (!m)
		exit(98);
	
	return (m);
}
