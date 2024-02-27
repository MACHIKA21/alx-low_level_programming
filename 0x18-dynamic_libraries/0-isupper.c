#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
#ifdef ORIGINAL_IMPLEMENTATION
    return (c >= 'A' && c <= 'Z');
#else
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
#endif
}
