#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* sum_them_all - sums all numbers of arguments passed
* @n: total number of args passed in
* @...: args passed
* Return: returns 0 if n is 0 and sum if otherwise
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
