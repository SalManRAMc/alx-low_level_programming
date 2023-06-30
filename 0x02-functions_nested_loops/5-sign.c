
#include "main.h"

/**
* print_sign - print + if n is greater than 0,
* 0 if n is 0 and - if n is less than 0
*
* @n: operand to be determined and assigned a sign
*
* Return: 1 if n is +ve, -1 if n is negative, zero if n is 0
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
