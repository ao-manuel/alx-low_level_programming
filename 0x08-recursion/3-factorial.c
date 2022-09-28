#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 *
 * @n : Int parameter
 * Return: integer value of factorial n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (1);
		}
		return (n * factorial(n - 1));
	}
}
