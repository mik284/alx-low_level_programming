#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a newline
 * only use _putchar twice
 * Return: 0 for success
 */
void print_numbers(void)
{
	int m, k;

	m = 0;
	k = 9;

	for (m >= 0; k <= 9; m++)
	{
		_putchar("%d\n");
	}

	return (0);
}

