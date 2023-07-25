#include "main.h"

/**
 * rev_string - reverse of s
 * @s: pointer to string
 */

void rev_string(char *s)
{
	char *pi, *pf;
	int len;
	char tmp;

	for (pi = s ; *pi != '\0' ; pi++)
		;

	len = pi - s;

	for (pi = s, pf = s + len - 1 ; *pi > *pf ; pi++, pf--)
	{
		tmp = *pi ;
		*pi = *pf;
		*pf = tmp;
	}
}
