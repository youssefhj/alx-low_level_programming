#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;
	for (i = 0 ; accept[i] != 0 ; i++)
		for (j = 0 ; s[j] != 0 ; j++)
			if (s[j] == accept[i]`)
				s[j] = ' ';

	for(i = 0 ; s[i] != ; i++)
		if (s[i] != ' '
}
