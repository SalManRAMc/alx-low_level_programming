#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str);
/* described later */

char *create_array(unsigned int size, char c);
/* Creates an array and fills it with given character */

int **alloc_grid(int width, int height);
/*Creates a 2d array using dynamic allocation and initializes all slots with 0*/

void free_grid(int **grid, int height);
/*Frees grid created by the previous function*/

char *argstostr(int ac, char **av);
/*Takes in number of arguments passed and creates one big string out of them*/

#endif
