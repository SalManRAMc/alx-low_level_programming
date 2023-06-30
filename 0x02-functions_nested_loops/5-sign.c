
#include "main.h"

/**
* parent_sign- determine sign of number
*
* @n: operand to be determined and assigned a sign
*
* Return: 1 if n is +ve, -1 if n is negative, zero if n is 0 
*
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
