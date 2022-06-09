#include "main.h"

/**
 * _abs - computes absolute value
 *
 * @n: The integer to compute
 *
 * Return: On success 1.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
