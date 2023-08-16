#include "function_pointers.h"


/**
 * print_name - print name using f function
 *
 * @name: input string
 * @f: pointer to display function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
