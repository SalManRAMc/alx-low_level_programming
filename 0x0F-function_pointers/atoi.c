#include "main.h"

/*
 * _atoi - simple fn, converts strings to numbers
 *
 * @stringinput: string to be converted
 *
 * Return: integer of string
 */

int _atoi(char* stringinput)
{
	unsigned int result;
	int signswitch = -1;

	while (*stringinput++)
	{
		if (*stringinput == '-')
			result = signswitch;
		else
			result = (result * 10) + (*stringinput - '0');
	}
	return (result);
}
