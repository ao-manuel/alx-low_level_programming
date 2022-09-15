#include "main.h"
/**
  *_isupper - Checks for upper case character
  *
  * Return: return 1 if uppercase or 0
  * otherwise
  *
  * @c: parameter that receives the data passed
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
