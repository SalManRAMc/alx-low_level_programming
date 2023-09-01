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
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
