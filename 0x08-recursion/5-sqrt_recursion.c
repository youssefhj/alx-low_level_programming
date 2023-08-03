#include "main.h"

/**
 * check - chek if n natural square
 * @d: input
 * @n: input
 * Return: -1 not natural square ;sqr(n) otherwize
 */
int check(int d, int n)
{
	if (d * d == n)
		return (d);

	if (d == 0 || d == 1)
		return (-1);

	return (check(d / 2, n));
}
/**
 * _sqrt_recursion - sqrt of with recursion
 * @n: input
 * Return: sqrt(n)
 */
int _sqrt_recursion(int n)
{
	if (n < 0 || (n % 2) != 0)
		return (-1);

	return (check(n, n));
}
