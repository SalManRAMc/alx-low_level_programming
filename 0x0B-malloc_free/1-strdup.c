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
  int _strlen = 0;
  char *newstrcpy;

  if (str == NULL)
    return (NULL);

  for (; *str != '\0'; *str++)
    _strlen++;

  newstrcopy = malloc((_strlen * sizeof(char)) + 1);

  if (newstrcopy == NULL)
    return (NULL);
  else
    {
    do
      {
	*newstrcopy++ = *str++;
      }while (*str == '\0');
  *newstrcopy + 1 = '\0';
    }
  return (newstrcopy);
}
