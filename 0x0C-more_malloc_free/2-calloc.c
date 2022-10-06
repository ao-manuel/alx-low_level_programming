#include "main.h"
#include <stdlib.h>

/**
  *_calloc - Allocates memory for an array using malloc
  *
  * @nmemb : Number of element in the array
  * @size : size of byte each
  *
  * Return: void pointer
  *
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pcalloc;
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pcalloc = malloc(nmemb * size);

	if (pcalloc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		pcalloc[i] = 0;
	}
	ptr = pcalloc;
	return (ptr);
}
