#include "main.h"

/**
* wordcount - counts words in a string
*
* @sentence: string whose words are to be counted
*
* Return: Number of words
*/

int wordcount(char *sentence)
{
	int i, prevchar, wordnumber = 0;

	for (i = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] != ' ')
		{
			if (prevchar == 0)
			{
				wordnumber++;
			}
			prevchar = 1;
		}
		else
		{
			prevchar = 0;
		}
	}
	return (wordnumber);
}

/**
 * **strtow - seperates a string into an array of words
 *
 * @str: original string to be split
 *
 * Return: NULL on failure, pointer to array of words on success
 */

char **strtow(char *str)
{
	int i, j, k, len = 0, wordnumber, counter;
	char **listofwords;
	
	if (str == NULL || str[0] == '\0')
		return (NULL);

	wordnumber = wordcount(str);
	listofwords = malloc(wordnumber * sizeof(char *));
	
	if (listofwords == NULL)
		return (NULL);

	/*Create the 2d array*/
	for (i = 0, counter = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{

			for (j = i, len = 0; str[j] != ' ' && str[j] != '\0'; j++)
			{
				len++;
			}

			listofwords[counter] = malloc((len + 1) * sizeof(char));

			if (listofwords[counter] == NULL)
			{
				/* Free previously allocated memory */
				for (k = 0; k < counter; k++)
				{
					free(listofwords[k]);
				}
				free(listofwords);
				return (NULL);
			}

			for (k = 0;i < j; k++, i++)
			{
				listofwords[counter][k] = str[i];
			}

			listofwords[counter][k] = '\0';

			counter++;
		}
	}
	return (listofwords);
}
