#include "main.h"

/**
 * _pow_recursion - Outputs power
 * @x: the integer to raise power
 * @y: the integer to raise power
 *
 * Return: Power on sucess
 * If y is lower than 0, -1
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		return (x * _pow_recursion(x, y));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
