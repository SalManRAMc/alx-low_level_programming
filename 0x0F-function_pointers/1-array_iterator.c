#include "function_pointers.h"

/**
 * array_iterator - calls upon a function that goes through an array
 *
 * @array: array of ints being used
 * @size: size of array
 * @action: pointer to function that itirates through array
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
