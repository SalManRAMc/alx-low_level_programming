#include "main.h"

/**
 * string_nconcat - concatenate two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes used from s2
 *
 * Return: pointer to new array, Null on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j, len3 = 0;
	char *s3;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	while (*s1++ != '\0')
		len1++;
	while (*s2++ != '\0')
		len2++;
	
	if (n >= len2)
		n = len2;
	len3 = len1 + len2;

	s3 = malloc((len3 + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < len1; i++)
			s3[i] = s1[i];
		for (i = i, j = 0; j < n; j++)
			s3[i + j] = s2[j];
	}
	s3[i + j] = '\0';
	return (s3);
}
