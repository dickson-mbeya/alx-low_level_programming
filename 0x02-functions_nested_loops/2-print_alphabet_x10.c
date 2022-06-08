#include "main.h"

/**
 * print_alphabet_x10 - prints alpbabet in lowercase 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{	char = 'a';

	while (ch <= 'z')
	{
		for (int i = 0; i < 10; i++)
		{
			_putchar(ch);
		}
		ch++;
	}
	_putchar('\n');
}
