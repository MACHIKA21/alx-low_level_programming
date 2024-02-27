#include "main.h"
<<<<<<< HEAD

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
=======
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
        	unsigned int n = 0;
        	int r;
 
        	while (*s)
        	{
                    	for (r = 0; accept[r]; r++)
                    	{
                                	if (*s == accept[r])
                                	{
                                            	n++;
                                            	break;
                                	}
                                	else if (accept[r + 1] == '\0')
                                            	return (n);
                    	}
                    	s++;
        	}
        	return (n);
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b
}
