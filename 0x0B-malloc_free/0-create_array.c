#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - This function creates an array.
  *
  * @size : Unsigned int size of the array
  * @c : Char to intialize each address with
  *
  * Return: A pointer to this address.
  *
 **/

char *create_array(unsigned int size, char c)
{
	char *ps5;
	unsigned int x;

	if (size == 0)
		return (NULL);

	ps5 = malloc(size * sizeof(char));
	if (ps5 == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		*(ps5 + x) = c;
	}
	return (ps5);
}
