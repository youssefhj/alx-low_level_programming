#include "main.h"

/**
 * has_diviseur - check if n have diviseur [1,n] exluded
 * @d: input
 * @n: input
 * Return: 1: n have diviseur 0 otherwize
 */
int has_diviseur(int d, int n)
{
	if (d == 0 || d == 1)
		return (0);
	if (d % 2 == 0)
		return (1);

	return (has_diviseur(n / (d - 1), n));
}

/**
 * is_prime_number - check if n is primre
 * @n: input
 * Return: 0 if n not prime 1 otherwize
 */
int is_prime_number(int n)
{
	int d;

	if (n <= 1 || n % 2 == 0)
		return (0);

	d = has_diviseur(n, n);

	if (d)
		return (0);

	return (1);

}
