#include <stdio.h>

/**
 * _length - len of nb
 * @nb: string
 * Return: len
 */
int _length(char *nb)
{
	int i, len;

	i = len = 0;
	while (nb[i] != '\0')
	{
		len++;
		i++;
	}
	if(nb[0] == '-') 
		len--;

	return (len);
}
/**
 * to_integer - convert nb to integer
 * @nb: string number
 * Return: interger
 */
int to_integer(char *nb)
{
	int integer, p, i;

	p = 1;
	integer = 0;

	i = _length(nb) - 1;
	while (i >= 0)
	{
		if(nb[0] != '-')
			integer = integer + ((nb[i] - '0') * p);
		p *= 10;
		i--;
	}
	if (nb[0] == '-')
		integer *= -1;
	return (integer);
}


/**
 * main - Entry point
 * @argc: len of arguments
 * @argv: array of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", to_integer(argv[1]) * to_integer(argv[2]));
	return (0);
}
