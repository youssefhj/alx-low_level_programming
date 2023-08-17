#include "variadic_functions.h"

/**
 * print_strings - print strings separated by separator
 * @separator: string
 * @n: size of arguments
 * @...: list of integers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_start(ptr, n);

		for (i = 0 ; i < n ; i++)
		{
			str = va_arg(ptr, char *);

			if (separator && i != (n - 1))
				printf("%s%s", str ? str : "(nil)", separator);
			else
				printf("%s", str ? str : "(nil)");

		}
		va_end(ptr);
	}
	printf("\n");
}
