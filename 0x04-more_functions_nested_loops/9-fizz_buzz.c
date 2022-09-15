#include <stdio.h>

/**
  *main - program that prints the numbers from 1 to 100,
  *	But for multiples of three print Fizz instead of the number
  *	and for the multiples of five print Buzz. For numbers which are
  *	multiples of both three and five print FizzBuzz.
  *
  *Return: Always 0 (Success)
  */

int main(void)
{
	int x;

	x = 1;
	printf("%d", x);
	for (x = 2; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");
	return (0);
}
