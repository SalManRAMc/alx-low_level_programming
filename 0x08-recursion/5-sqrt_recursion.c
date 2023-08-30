#include "main.h"

/**
* r_square - determines whether number has square or not
*
* @start: starting number 
* @requested_number: number whose square is being determined
*
* Return: square root
*/

int r_square(int start, int requested_number)
{
  int x = start * start, number;

 if (x < requested_number)
   {
     number = r_square(start + 1, requested_number);
     return (number);
   }
 else if (x == requested_number)
    {
      return (start);
    }
 else
    return (-1);
}

/**
 * _sqrt_recursion - wrapper function to determine natural sqrts
 *
 * @n: requested number whose square root is to be found
 *
 * Return: Square root or -1 on failure
 */

int _sqrt_recursion(int n)
{
  int x;
  
  x = r_square(1, n);
  return (x);
}
