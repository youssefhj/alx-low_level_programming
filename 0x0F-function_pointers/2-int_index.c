#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: array
 * @size: size
 * @cmp: function pointer
 *
 * Return: search element in success otherwize -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]) != 0)
				return (array[i]);

		}
	}
	return (-1)
}
