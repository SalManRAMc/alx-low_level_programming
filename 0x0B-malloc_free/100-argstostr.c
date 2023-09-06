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
	if (ac == 0 || av == NULL)
		return (NULL);

	int i, j, len, strindex = 0;
	char* bigstring;

	for (i = 0; av[i] != NULL; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			len++;

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
			strindex += 1;
			bigstring[strindex] = av[i][j];
		}
		stringindex += 1;
		bigstring[strindex] = '\n';
	}
	bigstring[strindex + 1] = '\0';
	return (bigstring);
}
