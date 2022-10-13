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
	if (n == 0)
		return (0);
	int sum, i;
	va_list ap;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
