#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - return a pointer to a newly allocated space in
 * memory
 *
 *@str: string to be copied
 *
 *Return: pointer to duplicated string, NULL on failure to provide
 * enough memory
 */

char *_strdup(char *str)
{
  int _strlen = 0, i;
  char *newstrcpy;

  if (str == NULL)
    return (NULL);

  while (*str++)
    _strlen++;

  newstrcpy = malloc((_strlen + 1) * sizeof(char));

  if (newstrcpy == NULL)
    {
    return (NULL);
    }
  else
    {
      for (i = 0; i <= _strlen; i++)
	newstrcpy[i] = str[i];
      
    newstrcpy[i + 1] = '\0';
    }
  return (newstrcpy);
}
