#include "main.h"

/**
 * swap_int - swaps values of integers
 * @a: first iteger to swap
 * @b: second integer to swap
 *
 * Return: On sucess 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
