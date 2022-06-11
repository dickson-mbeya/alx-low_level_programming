#include "main.h"

/**
 * _isupper - Cheecks for uppercase
 * @c: The character to check
 *
 * Return: On success 1.
 * On not upper, 0 is returned.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
