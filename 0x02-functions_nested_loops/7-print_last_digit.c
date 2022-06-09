#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: The integer to compute
 *
 * Return: On success 1.
 */
int print_last_digit(int n)
{
	int lDgt = n % 10;

	_putchar(lDgt);
}
