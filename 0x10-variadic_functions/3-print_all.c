#include "variadic_functions.h"

/**
 * format_char - format char
 * @separator: separator
 * @ptr: pointer of va_list
 */
void format_char(char *separator, va_list ptr)
{
	printf("%s%c", separator, va_arg(ptr, int));
}
/**
 * format_string - format string
 * @separator: separator
 * @ptr: pointer of va_list
 */
void format_string(char *separator, va_list ptr)
{
	char *s = va_arg(ptr, char*);

	if (s == NULL)
		s = "(nil)";

	printf("%s%s", separator, s);
}

/**
 * format_float - format float
 * @separator: separator
 * @ptr: pointer of va_list
 */
void format_float(char *separator, va_list ptr)
{
	printf("%s%f", separator, va_arg(ptr, double));
}

/**
 * format_int - format int
 * @separator: separator
 * @ptr: pointer of va_list
 */
void format_int(char *separator, va_list ptr)
{
	printf("%s%d", separator, va_arg(ptr, int));
}

/**
 * print_all - print anything
 * @format: format of type
 * @...: list of arguments
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	int i, j;
	char *separator = "";
	format_type ft[] = {
		{"c", format_char},
		{"s", format_string},
		{"f", format_float},
		{"i", format_int},
		{NULL, NULL}
	};

	va_start(ptr, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (ft[j].token)
		{
			if (ft[j].token[0] == format[i])
			{
				ft[j].f(separator, ptr);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
