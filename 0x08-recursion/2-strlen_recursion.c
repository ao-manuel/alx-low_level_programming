#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * Return: returns the string length
 * @s: pointer that accepts the strings
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
