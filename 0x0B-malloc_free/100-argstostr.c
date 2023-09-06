#include "main.h"

/**
 * *argstostr - concatenates arguments into one string
 *
 * @ac: argcount
 * @av: array of strings (array of arguments)
 *
 * Return: Pointer to big string, or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	int strindex = 0;
	char *bigstring;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	bigstring = malloc((len + 1) * sizeof(char));
	if (bigstring == NULL)
	{
		printf("memory Allocation failed");
		return (NULL);
	}

	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			bigstring[strindex] = av[i][j];
			strindex++;
		}
		bigstring[strindex] = '\n';
		strindex++;
	}
	bigstring[strindex] = '\0';
	return (bigstring);
}
