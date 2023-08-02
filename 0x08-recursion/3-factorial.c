#include "main.h"

/**
 * factorial - n! = ??
 * @n: input
 * Return: n!
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (!n)
		return (1);

	return (n * factorial(n - 1));

}
