#include "main.h"

/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int destlength,srclength;
	
	destlength=0;
	while(dest[destlength])
	      destlength++;
	
	for(srclength=0;src[srclength];srclength++)
		dest[++destlength] = src[srclength];

	return (dest);
}
