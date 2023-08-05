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
	int dindex;
	int sindex;

	dindex=0;
	sindex=0;
	while(dest[dindex]!='\0')
		dindex++;
	
	while(src[sindex]!='\0')
	{
		dindex++;
		dest[dindex] = src[sindex];
		sindex++;
	}
	dest[dindex+1] = '\0';

	return (dest);
}
