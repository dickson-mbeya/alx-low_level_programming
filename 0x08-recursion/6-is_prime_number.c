#include "main.h"

/**
 * is_prime_number - Check prime number
 * @n: number to check 
 *
 * Return: 1 on success
 */
int is_prime_number(int n)
{
	int i;

	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (1);
	}
	else if (n % i != 0)
	{
		return (0);
	}
	else
	{
		i = i - 1;
		is_prime_number(n);
	}
}
