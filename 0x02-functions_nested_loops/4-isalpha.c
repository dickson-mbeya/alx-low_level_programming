#include "main.h"

/**
 * _isalpha - check for alphabet
 *
 * @c: The alphabet to print
 *
 * Return: On success 1.
 * On not alphabet, 0 is returned.
 */
int _isalpha(int c)
{
	int success = 1;
	int notlower = 0;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (success);
	}
	else
	{
		return (notlower);
	}
}
