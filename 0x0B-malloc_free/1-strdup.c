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
	int i = 0, n;
        char *copiedarray;

	n = strlen(str);

	if (str == NULL)
	{
		printf("input string is empty");
		return (NULL);
	}
	copiedarray = malloc(sizeof(char) * n);
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
	i++;
	copiedarray[i] = str[i];
	return (copiedarray);
}
