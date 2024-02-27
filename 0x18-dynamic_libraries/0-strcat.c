
#include "main.h"




/**


<<<<<<< HEAD
 *  _strcat - function that concatenates two strings


 *  @dest: entered value


 *  @src: entered value
=======
 * _strncat - function concatenate two strings


 * using at most n bytes from src


 * @dest: entered value


 * @src: entered value


 * @n: entered value
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b


 *


<<<<<<< HEAD
 *  Return: void
=======
 * Return: dest
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b


 */


<<<<<<< HEAD
char *_strcat(char *dest, char *src)
=======
char *_strncat(char *dest, char *src, int n)
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b


{


        	int a;


        	int b;


 


        	a = 0;


        	while (dest[a] != '\0')


        	{


                    	a++;


        	}


        	b = 0;


<<<<<<< HEAD
        	while (src[b] != '\0')
=======
        	while (b < n && src[b] != '\0')
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b


        	{


<<<<<<< HEAD
                    	dest[a] = src[b];


                    	a++;


                    	b++;
=======
        	dest[a] = src[b];


        	a++;


        	b++;
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b


        	}


<<<<<<< HEAD
 


=======
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b
        	dest[a] = '\0';


        	return (dest);


}
