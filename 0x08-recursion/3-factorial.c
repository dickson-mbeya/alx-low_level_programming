#include "main.h"

/**
 * factorial - Ouptputs factorial
 * @n: The number to find factorial
 *
 * Return: 0 on success
 * On error, -1 is returned
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n-1));
	}
}
