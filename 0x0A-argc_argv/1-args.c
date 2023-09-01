#include <stdio.h>

/**
 * main - prints number of arguments
 *
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
