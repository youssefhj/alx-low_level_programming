#ifndef _VARIADIC_FUNCTION_H_
#define _VARIADIC_FUNCTION_H_

#include <stdio.h>
#include <stdarg.h>

/**
 * struct format_type - structure
 *
 * @token: token
 * @f: function pointer
 */
typedef struct format_type
{
	char *token;
	void (*f)(char *, va_list);
} format_type;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
