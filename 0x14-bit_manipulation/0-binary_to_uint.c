#include "main.h"

/**
 * binary_to_uint - converts binary to int
 *
 *@b: binary number
 *
 * Return: converted number or 0 on fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int base = 1, strlen = 0, index;


	/*get to last index in string (because binary nums are read from right to
	 left*/
	while (b[strlen])
	{
		strlen++;
	}

	/*binary is read from right to left, 
	  hence why we start at last index before '\0' */
	for (index = strlen - 1; index >= 0; index--)
	{
		/*checks if number has anything other than 0s or 1s*/
		if(b[index] != '0' && b[index] != '1')
			return 0;
		/*process of checking if indexed space is 1*/
		if (b[index] == '1')
		{
			/*if indexed space is 1, add binary equivalent to decimal result*/
			decimal += (1*base);
		}
		/*move on to next base 2 number*/
		base *= 2;
	}
	return (decimal);
}
