#include "main.h"

/**
 * main - Entry Point
 *
 * Description: Prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int i;
	
	for (i = 0; i < 8; i++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
