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
	int i;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
