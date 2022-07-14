#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: string to print
 *
 * Return: 0 on success
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(str + 1);
		printf("%c", *str);
	}
}
