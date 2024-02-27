<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
=======

#include "main.h"

/**


 * char *_strcpy - program copies the string pointed to by src


 * @dest: copy to


 * @src: copy from


 * Return: string value


 */


char *_strcpy(char *dest, char *src)


{


        	int a = 0;


        	int b = 0;


 


        	while (*(src + a) != '\0')


        	{


                    	a++;


        	}


        	for ( ; b < a ; b++)


        	{


                    	dest[b] = src[b];


        	}


        	dest[a] = '\0';


        	return (dest);


>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b
}
