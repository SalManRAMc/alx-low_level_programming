#include "main.h"

/**
 * malloc_checked - checks if malloc works
 *
 * @b: byte number
 *
 * Return: ptr, exit with value of 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
		exit(98);

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
