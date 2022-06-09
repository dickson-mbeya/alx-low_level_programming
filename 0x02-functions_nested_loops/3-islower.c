#include "main.h"

/**
 *
 *  _islower- check for lowercase
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On not lower, -0 is returned.
 */
int _islower(int c)
{
	char ch;
	int success = 1;
	int notlower = 0;

	if (ch >= 97 && ch <= 122)
	{
		return success;
	}
	else
	{
		return notlower;
	}
}
