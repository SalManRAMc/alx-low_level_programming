#include "main.h"

/**
* _abs - returns the absolute unsigned value of a signed int
*
* @n: takes in integer type input for function
*
* Return: unsigned int (Success) 
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
