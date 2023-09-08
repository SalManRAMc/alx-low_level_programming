#include "main.h"

/** string_nconcat - concatenate two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes used from s2
 *
 * Return: pointer to new array, Null on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0, k = 0, len3 = 0;
        char *s3;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";

        for (i = 0; s1[i] != '\0'; i++)
		len1++;
        for (i = 0; s2[i] != '\0'; i++)
                len2++;

        if (n >= len2)
                n = len2;
        len3 = len1 + n + 1;

        s3 = malloc(len3 * sizeof(char));
        if (s3 == NULL)
                return (NULL);
        else
        {
                while (j < len1)
		{
			s3[j] = s1[j];
			j++;
		}
                while (k < n)
		{
			s3[j + k] = s2[k];
			k++;
		}
	}
        s3[j + k] = '\0';
        return (s3);
}
