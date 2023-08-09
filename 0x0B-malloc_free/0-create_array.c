#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array and initializes it with a custom char
 *
 * @size: size of array
 * @c: character used for initialisation
 *
 * Return: NULL if fails or size is zero, return pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		printf("Unsuccessful memory allocation");
		return (NULL);
	}
	while (i < size - 1)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
