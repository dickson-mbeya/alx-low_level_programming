#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 and 9 except 2 an 4
 *
 * Return: Always 0(success)
 */
void print_most_numbers(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
