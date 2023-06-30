#include "main.h"

/**
 * _islower - checks whether char input is lowercase
 *
 * Retuns: 1 (char is lowercase), 0 (char is not lowercase)
*/

int _islower(int c)
{
	if (c >= 97 || c <= 122)
		return (1);
	else
		return (0);
}
