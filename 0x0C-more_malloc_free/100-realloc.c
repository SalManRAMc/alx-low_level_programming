#include "main.h"

/**
 * realloc - free old pointer, allocate with new size;
 *
 *@ptr: pointer whose size will change
 *@old_size: old size
 *@news_size: Go figure
 *
 * Return: ptr to new size, NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *TempPointer;
	unsigned int i, oldlen = 0;

	for (i = 0; ((char *)ptr)[i] != '\0'; i++)
		oldlen++;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	/*allocate new size with uninitialised extra memory*/
	else if (new_size > old_size)
	{
		TempPointer = malloc(old_size);
		if (TempPointer == NULL)
		{
			free(ptr);
			return (NULL);
		}
		for (i = 0; i < oldlen; i++)
			TempPointer[i] = ((char*)ptr)[i];

		free(ptr);
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			free (TempPointer);
			return (NULL);
		}

		for (i = 0; TempPointer[i] != '\0'; i++)
			((char *)ptr)[i] = TempPointer[i];
		((char *)ptr)[i] = '\0';
		free(TempPointer);
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
		return (NULL);
}
