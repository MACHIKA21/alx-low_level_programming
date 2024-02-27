#include "main.h"
<<<<<<< HEAD

/**
 * _strlen - returns the length of a string.
 * @s: input stringeturn.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
=======
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
        	int longi = 0;
 
        	while (*s != '\0')
        	{
                    	longi++;
                    	s++;
        	}
 
        	return (longi);
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b
}
