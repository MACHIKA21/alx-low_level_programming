#include "main.h"
<<<<<<< HEAD
/**
 * _isalpha - Check if character is a alphabet character.
 * @c: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
=======
                    	
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
        	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b
}
