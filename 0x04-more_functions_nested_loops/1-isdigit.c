#include "main.h"

/**
 * _isdigit - check for digit
 *
 * @c: The charcter to check
 *
 * Return: On success 1.
 * On not alphabet, 0 is returned.
 */
int _isdigit(int c)
{
    if (c >= 48 && c <= 57)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
