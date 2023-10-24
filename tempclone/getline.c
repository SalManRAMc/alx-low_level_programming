#include <stdio.h> 
#include <stdlib.h>

#define bufsize 1024
/**
*
*
*
*
*
*/


int main()
{
	char *buffer;
	size_t bun = bufsize;

	buffer = malloc(sizeof(char) * bufsize);
	getline(&buffer, &bun, stdin);

	printf("%s",buffer);

	return (1);
}
