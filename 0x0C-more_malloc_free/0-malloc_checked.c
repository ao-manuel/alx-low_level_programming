#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: int b parameter to receives the size of memory allocated
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *pmalloc = malloc(b);

	if (pmalloc == NULL)
		exit(98);
	return (pmalloc);
}
