#include "main.h"

/**
 * _isupper - Checks case of alphabet
 * @c: The charcter to check
 *
 * Return: on succes 1.
 * On not upper, 0 is  returned
 */
int _isupper(int c)
{   if (c >= 65 && c <= 90)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
