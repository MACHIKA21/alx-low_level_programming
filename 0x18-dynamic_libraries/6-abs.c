#include "main.h"
<<<<<<< HEAD
/**
 * _abs - compute the absolute value of an integer
 * @n: int type number
 * Return: absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
=======
 
/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
        	if (n >= 0)
        	{
                    	return (n);
        	}
        	return (-n);
>>>>>>> 23c16df786d310ec8eab8391a54c7aaed4a4b34b
}
