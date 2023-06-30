#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

void print_alphabet(void)
{
	int loweralpha;

	for (loweralpha = 'a';loweralpha <= 122; loweralpha++)
		_putchar(loweralpha);
	_putchar('\n'); 
}
