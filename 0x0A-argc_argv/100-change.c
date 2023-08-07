#include <stdio.h>
#include <stdlib.h>

/**
 * main - change cents 
 *
 * @argc: number of args
 * @argv: array of pointers to arfs
 *
 * Return: 1 on error, 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, remainder = atoi(argv[1]), change = 0;
		int cents[] = {25, 10, 5 ,2 , 1};

		for (i = 0; i < 5; i++)
		{
			if (remainder >= cents[i])
			{
				change += remainder / cents[i];
				remainder = remainder % cents[i];
				if (money % cents[i] == 0)
				{
				break;
				}
			}
		}
	printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
