#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two args
 * @argc: counts argument
 * @argv: arguments
 * Return: print Error if there is less than 2 arg,
 * else Success
 */

int main(int argc, char **argv)
{
	int sum = 0;

	if (argc < 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	exit(EXIT_SUCCESS);
}
