#include "main.h"

/**
 * print_alphabet_x10 - prints alpbabet in lowercase 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{       int i = 0;

	while (i < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}
