#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
