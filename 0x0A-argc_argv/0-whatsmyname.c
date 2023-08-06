#include <stdio.h>

/**
 *  main - the following program should print its' name
 *  upon compilation
 *
 *  @argc: argument count
 *  @argv: array containing pointers to arguments passed
 *
 *  Return: 1 on success
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (1);
}
