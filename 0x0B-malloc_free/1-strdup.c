#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space that is
 * a copy of a given string parameter
 *
 * @str: string parameter that is to be copied
 *
 * Return: NULL if string was NULL or unsuccessful, 0 on success
 */

char *_strdup(char *str)
{
	int i = 0, n = strlen(str);
        char *copiedarray;

	if (str == NULL)
	{
		printf("input string is empty");
		return (NULL);
	}
	copiedarray = malloc((sizeof(char) * n) + 1); //+1 for endofsring char
	if (copiedarray == NULL)
	{
		printf("Memory Allocation Email");
		return (NULL);
	}
	while (str[i] != '\0')
	{
		copiedarray[i] = str[i];
		i++;
	}
	return (copiedarray);
}
