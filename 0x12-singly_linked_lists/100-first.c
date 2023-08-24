#include "lists.h"

void _start_first(void) __attribute__((constructor));

/**
 * _start - executes before main
 *
 * Return: void
 */

void _start_first(void)
{
	printf("You're beat! and yet, you must allow,\n I bore my house upon my back!\n");
}
