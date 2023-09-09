#include "main.h"

/**
 * array_range - creates an array of integers from min to max
 *
 * @min: smallest number in array
 * @max: largest number in array
 *
 * Return: NULL on failure or when max < min, pointer to array on success
 */

int *array_range(int min, int max)
{
	int *ar, size, i = 0, nmemb = 0;

	if (min > max)
		return (NULL);

	size = sizeof(int);

	for (i = min; i <= max; i++)
		nmemb++;

	ar = malloc(size * nmemb);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		ar[i] = min + i;
	}
	return (ar);
}
