#include "main.h"

/**
 * _pow_recursion - return value of x to power of y
 * @x : number to be raised to power of y
 * @y : number to be powered by x
 *
 * Return: power of x by y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		if (y == 1)
		{
			return (x);
		}
		return (x * _pow_recursion(x, (y - 1)));
	}

}
