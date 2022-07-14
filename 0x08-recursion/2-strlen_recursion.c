#include "main.h"

/**
 * _strlen_recursion - Outputs length of a string
 * @s: The string to find its length
 *
 * Return; Length of string on success
 */
_strlen_recursion(char *s)
{
	static int length = 0;
	if (*s != NULL)
	{
		length++;
		_strlen_recursion(++s);
	else
	{
		return (length);
	}
}}
