#include "main.h"

/**
 * print_alphabet_x10 - utilizes on the _putchar function to print
 *                 the alphabet a - z 10 times
*/

void print_alphabet_x10(void)
{
	int loweralpha;
	int printcounter;

	for (printcounter = 0; printcounter < 10; printcounter++)
	{
		for (loweralpha = 'a'; loweralpha <= 122; loweralpha++)
			_putchar(loweralpha);
		_putchar('\n');
	}
}
