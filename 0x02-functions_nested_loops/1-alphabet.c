#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++);
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
