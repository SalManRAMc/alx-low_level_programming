#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - creates an array of characters and initializes it
 * with a specfic character
 *
 *@size: size of array
 *@c: character used to fill array
 *
 *Return: NULL if size is 0, otherwise pointer to array
 */

char *create_array(unsigned int size, char c)
{
  char *ar;
  int i;

  if (size == 0)
    return (NULL);
  
  ar = malloc(size * sizeof(char));
  if (ar == NULL)
    return (NULL);
    else
      {
	for (i = 0; i < size; ar++)
	  *ar = c;
	return (ar);
      }
}
