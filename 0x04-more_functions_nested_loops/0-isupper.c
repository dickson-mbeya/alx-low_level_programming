#include "main.h"

/**
 * _isupper - Checks case of alphabet
 * @c: The charcter to check
 *
 * Return: If upper 1.
 * Else, return 0
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
