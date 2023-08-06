#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers
 *
 * @argc: number of arguments to be passed
 * @argv: array of pointers to arguments
 *
 * Return: 0 or -1 if it fails
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("error");
		return (-1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
