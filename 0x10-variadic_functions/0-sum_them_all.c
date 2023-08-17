#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all arguments
 * @n: size of arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int i, sum;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	sum = 0;
	for (i = 0 ; i < n ; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
