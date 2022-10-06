#include <stdio.h>
#include <stdlib.h>

unsigned int _strlength(char *s1);
/**
  *string_nconcat - Concatenate two strings
  *
  * @s1 : First string of characters
  * @s2 : Second string
  * @n : Number of byte to be concatenated from s2
  *
  * Return: Pointer to the new string.
  *
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstring;
	unsigned int length1, length2, x, y, a = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	length1 = _strlength(s1);
	length2 = _strlength(s2);
	/*Allocated enough memory for any condition of n && s2*/
	if (n >= length2)
	{
		y = length1 + length2 + 1;
		newstring = malloc(y * sizeof(*newstring));
	}
	else
	{
		y = length1 + n + 1;
		newstring = malloc(y * sizeof(*newstring));
	}
	if (newstring == NULL)
		return (NULL);
	for (x = 0; x < (y - 1); x++)
	{
		if (x < length1)
		{
			newstring[x] = s1[x];
		}
		else
		{
			newstring[x] = s2[a];
			a++;
		}
	}
	newstring[x] = '\0';
	return (newstring);
}

/**
  * _strlength - count the length of string
  *
  * @s1 : string
  *
  * Return: Interger (Length)
  *
 **/

unsigned int _strlength(char *s1)
{
	if (*s1 == '\0')
		return (0);
	else
		return (1 + _strlength(s1 + 1));
}
