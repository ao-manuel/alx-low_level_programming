#include "main.h"

/**
  *print_diagonal - Draws a diagonal line
  *@n: number of times to draw the line
  *Return: void
  */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 2; y <= x; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
