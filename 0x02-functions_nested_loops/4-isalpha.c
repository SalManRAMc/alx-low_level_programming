#include "main.h"

/**
* _isalpha - determine whether or not input is alpha
*
* Return: 1 if c is alpha, 0 if c is not alpha
*
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
