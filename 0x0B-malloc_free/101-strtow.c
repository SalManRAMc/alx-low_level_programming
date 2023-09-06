#include "main.h"

/**
 * **strtow - seperates a string into an array of words
 *
 *@str: original string to be split
 *
 * Return: NULL on failure, pointer to array of words on success
 */

char **strtow(char *str)
{
	int i, j, k, len = 0, wordnumber, counter;
	char **listofwords;

	wordnumber = wordcount(str);
	listofwords = malloc(wordnumber * sizeof(char *));

	/*Create the 2d array*/
	for (i = 0, counter = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{

			for (j = i, len = 1; str[j] != ' ' || str[j] != '\0'; j++)
			{
				len++;
			}

			listofwords[counter] = malloc((len + 1) * sizeof(char));

			for (k = 0;i < j; k++, i++)
			{
				listofwords[counter][k] = str[i];
			}

			listofwords[counter][k] = '\0';

			counter++;
		}
	}

}
