#include "main.h"

/**
 * wordcount - counts words in a string
 *
 * @str: string whose words are to be counted
 *
 * return: Number of words
 */

int wordcount(char *sentence)
{
	int i, prevchar, wordcount = 0;

	for (i = 0; sentence[i] != '\0'; i++)
	{
		if (sentence[i] != ' ')
		{
			if (prevchar == 0)
			{
				wordcount++;
			}
			prevchar = 1
		}
		else
		{
			prevchar = 0;
		}
	}
	return (wordcount);
}
