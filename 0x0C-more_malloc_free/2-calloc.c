#include <stdio.h>
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
	
	if (nmemb = 0 || size = 0)
		return (NULL);
	void *pcalloc = malloc(nmemb * size);
	if (pcalloc == NULL)
		return (NULL);
	return (pcalloc);
}
