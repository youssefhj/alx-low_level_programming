#include "variadic_functions.h"

/**
 * print_numbers - print number separated by separator
 * @separator: string
 * @n: size of arguments
 * @...: list of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;


	if (n > 0)
	{
		va_start(ptr, n);

		for (i = 0 ; i < n ; i++)
		{
			if (separator && i != (n - 1))
				printf("%d%s", va_arg(ptr, int), separator);
			else
				printf("%d", va_arg(ptr, int));

		}
		va_end(ptr);
	}
	printf("\n");
}
