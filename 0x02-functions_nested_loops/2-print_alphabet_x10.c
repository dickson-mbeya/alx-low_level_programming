#include "main.h"

/**
 * print_alphabet_x10 - prints alpbabet in lowercase 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{	for (int i = 0; i < 10; i++)
	{
	int ch = 'a';
	
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	}
	_putchar('\n');
}	
