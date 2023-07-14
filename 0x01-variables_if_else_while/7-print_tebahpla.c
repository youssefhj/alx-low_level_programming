#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 success
 */
int main(void)
{
	int c;

	for (c = 122 ; c >= 97 ; c--)
		putchar(c);

	putchar('\n');
	return (0);
}
