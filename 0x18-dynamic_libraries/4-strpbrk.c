#include "main.h"
<<<<<<< HEAD

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
=======
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
        	int k;
 
        	while (*s)
        	{
                    	for (k = 0; accept[k]; k++)
                    	{
                    	if (*s == accept[k])
                    	return (s);
                    	}
        	s++;
        	}
 
return ('\0');
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b
}
