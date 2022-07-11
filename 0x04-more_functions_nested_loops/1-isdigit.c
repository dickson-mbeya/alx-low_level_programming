#include "main.h"

/**
 * _isdigit - checks if digit
 * @c: The charcter to check digit
 *
 * Return: On success 1.
 * On not digit, 0 is returned.
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
