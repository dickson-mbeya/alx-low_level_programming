#include "main.h"

/**
 * _strlen_recursion - Outputs length of a string
 * @s: The string to find its length
 *
 * Return; Length of string on success
 */
_strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
