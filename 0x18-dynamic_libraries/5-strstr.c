#include "main.h"
<<<<<<< HEAD

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
=======
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
        	for (; *haystack != '\0'; haystack++)
        	{
                    	char *l = haystack;
                    	char *p = needle;
 
                    	while (*l == *p && *p != '\0')
                    	{
                                	l++;
                                	p++;
                    	}
 
                    	if (*p == '\0')
                                	return (haystack);
        	}
 
        	return (0);
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b
}
