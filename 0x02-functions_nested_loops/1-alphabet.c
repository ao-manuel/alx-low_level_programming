#include "main.h"
#define MAX 26

/**
  * print_alphabet - Prints alphabet in lowercase
  *
  * Return: void
  */

void print_alphabet(void)
{
	int i = 0;
	char alp[MAX] = {"abcdefghijklmnopqrstuvwxyz"};

	while (i < MAX)
	{
		_putchar(alp[i]);
		i++;
	}
	_putchar('\n');
}
