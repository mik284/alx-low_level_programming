#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a newline
 * only use _putchar twice
 * Return: 0 for success
 */
void print_numbers(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		_putchar(m + '0');
	}

	_putchar('\n');
}
