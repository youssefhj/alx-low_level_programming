#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate the array
 * @array: array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *array_end = array + size - 1;

	if (array && size && action)
		while (array <= array_end)
			action(*array++);
}
