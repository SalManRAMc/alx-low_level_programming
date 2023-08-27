#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters of string
 *
 * Return: returns pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newarray;
	unsigned int counter1, counter2, len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	newarray = malloc(sizeof(char) * _strlen(s1) + 1 + n);

	if (!newarray)
		return (NULL);

	for (counter1 = 0; *s1 != '\0'; counter1++)
	{
		newarray[counter1] = *s1++;
	}

	for (counter2 = 0; counter2 <= n; counter2++)
	{
		newarray[counter1 + counter2] = *s2++;
	}
	newarray[counter1 + counter2] = '\0';
	return (newarray);
}
