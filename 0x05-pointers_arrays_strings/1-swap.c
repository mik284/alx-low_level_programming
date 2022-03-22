#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: is the int to be swapped with b
 * @b: is the int to be swapped with a
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
