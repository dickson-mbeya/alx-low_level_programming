#include "main.h"

/**
 * _strlen - finds length of string
 * @s: string to check length
 *
 * Return: On success string length
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return c;
}
