#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: counts argument
 * @argv: argument
 * Return: Success
 */

int main(int argc, char **argv)
{
	int i, toInt;
	int sum = 0;


	for (i = 1; i < argc; i++)
	{
		toInt = atoi(argv[i]);
		if (toInt == 0)
		{
			printf("Error\n");
			exit(EXIT_SUCCESS);
		}
		sum += toInt;
	}
	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
