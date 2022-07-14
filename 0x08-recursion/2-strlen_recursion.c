#include "main.h"

/**
 * _strlen_recursion - Outputs length of a string
 * @s: The string to find its length
 *
 * Return; Length of string on success
 */
int _strlen_recursion(char *s)
{
	if ('\0' != *s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
