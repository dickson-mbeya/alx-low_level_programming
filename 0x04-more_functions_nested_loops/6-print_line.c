#include "main.h"

/**
 * print-line - prints straight line terminal
 * @n: Number of times to print line
 *
 * Return: On success return 0.
 */
void print_line(int n)
{
	char i = 95;

	if (n > 0)
	{
		for (int a = 1; a <= n; a++)
		{
			_putchar(i);
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
