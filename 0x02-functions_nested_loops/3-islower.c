#include "main.h"
/**
  * _islower - checks for lowercase letter
  *
  * Return: returns 1 if the data is c or otherwise
  *
  *@c: The character in ASCII code
  */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
