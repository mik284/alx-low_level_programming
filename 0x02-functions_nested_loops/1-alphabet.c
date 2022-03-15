#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * followed by a new line
 * and only use _putchar twice
 */
void print_alphabet(void)
{
	char mk;

	mk = 'a';

	while (mk <= 'z')
	{
		_putchar(mk);
		mk++;
	}

	_putchar('\n');
}
