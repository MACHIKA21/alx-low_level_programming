#include "main.h"
/**
<<<<<<< HEAD
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
=======
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
        	int j;
 
        	j = 0;
        	while (j < n && src[j] != '\0')
        	{
                    	dest[j] = src[j];
                    	j++;
        	}
        	while (j < n)
        	{
                    	dest[j] = '\0';
                    	j++;
        	}
 
        	return (dest);
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b
}
