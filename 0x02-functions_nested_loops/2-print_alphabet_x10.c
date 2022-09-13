#include "main.h"
#define MAX 26

/**
  *print_alphabet_x10 - Prints alphabets 10 times
  *
  *Return: void
  */

void print_alphabet_x10(void)
{
	int x, y;
	char alp[26] = {"abcdefghijklmnopqrstuvwxyz"};

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 26; y++)
		{
			_putchar(alp[y]);
		}
	_putchar('\n');
	}
}
