#include "main.h"
<<<<<<< HEAD

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
=======
/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b
 * Return: integer.
 */
int _atoi(char *s)
{
<<<<<<< HEAD
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
=======
        	int sign = 1, i = 0;
        	unsigned int res = 0;
 
        	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
        	{
                    	if (s[i] == '-')
                                	sign *= -1;
                    	i++;
        	}
        	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
        	{
                    	res = (res * 10) + (s[i] - '0');
                    	i++;
        	}
        	res *= sign;
        	return (res);
 }
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b
