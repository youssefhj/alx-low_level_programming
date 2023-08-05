#include "main.h"

/**
 * _atoi - ascii to integer
 * @s: string number
 * Return: integer number
 */

int _atoi(char *s)
{

	int signe = 1, i = 0;
        unsigned int result = 0;

        while (!(s[i] <= '9' && s[i] >= '0' && s[i] != '\0'))
        {
                if (s[i] == '-')
                        signe *= -1;
                i++;
        }

        while (s[i] <= '9' && s[i] >= '0' && s[i] != '\0')
        {
                result = (result * 10) + (s[i] - '0');
                i++;
        }
        result *= signe;
        return (result);
}
