#include "main.h"

/**
 * print_sign - checks sign of number
 *
 * @n: The number to check
 *
 * Return: On success 1.
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int pstv = 1;
	int zro = 0;
	int ngtv = -1;

	if ( n > 0)
	{
		_putchar("+, ");
		return (pstv);
	}
	else if (n == 0)
	{
		_putchar("0, ");
		return (ngtv);
	}
	else
	{
		_putchar("-, ");
		return (notlower);
	}
}
