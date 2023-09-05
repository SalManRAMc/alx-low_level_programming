#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 *
 *@s1: string 1
 *@s2: string 2
 *
 *Return: NULL on failure, pointer to new string on success
 */

char *str_concat(char *s1, char *s2)
{
	int counter, len1 = 0, len2 = 0, newlen;
	char *newstring;

	if (s1 == NULL)
		*s1 = ' ';
	if (s2 == NULL)
		*s2 = ' ';

	for (counter = 0; s1[counter] != '\0'; counter++)
		len1++;
	for (counter = 0; s2[counter] != '\0'; counter++)
		len2++;

	newlen = len1 + len2;
	newstring = malloc((newlen + 1) * sizeof(char));

	if (newstring == NULL)
	{
		printf("Memory Allocation Failed");
		return (NULL);
	}
	else
	{
		for (counter = 0; counter < len1; counter++)
			newstring[counter] = s1[counter];
		for (counter = 0; counter < len2; counter++)
			newstring[counter + len1] = s2[counter];
		newstring[newlen + 1] = '\0';
	}
	return (newstring);
}

