#include "main.h"

/**
 *
 * Description: Prints alphabet followed by a new line
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int loweralpha;
	loweralpha = 'a';

	for (;loweralpha <= 122; loweralpha++)
		_putchar(loweralpha);
	_putchar('\n');
}
