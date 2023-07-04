#include "main.h"

/**
 *  _strchr - locates a character in a string
 *
 *  @s: string
 *  @c: character to be found
 *
 *  Return: index of first occurence if character is in string, or NULL if
 *  character is missing
*/

char *_strchr(char *s, char c)
{
	int size, i;

	size = 0;
	i = 0;

	while (s[i] != '\0')
	{
		size++;
		i++;
	}

	for (int itr = 0; itr < size; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}
	return (NULL);
}
