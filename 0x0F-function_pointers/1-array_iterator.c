#include "function_pointers.h"

/**
 * array_iterator - itrate the array
 *
 * @array: array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array || action)
		for (i = 0 ; i < size ; i++)
			action(array[i]);

}
