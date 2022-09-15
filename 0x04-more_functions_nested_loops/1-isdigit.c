#include "main.h"

/**
  * _isdigit - checks for a digit 0 through 9
  *
  * Return: returns 1 if c is a digit or 0 if
  *otherwise
  *@c: accepts data when the function is called
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
