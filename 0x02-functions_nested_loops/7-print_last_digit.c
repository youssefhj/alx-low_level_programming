#include "main.h"

/**
 * print_last_digit - print the last digit of n
 * @n: input number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	return (n % 10);
}
