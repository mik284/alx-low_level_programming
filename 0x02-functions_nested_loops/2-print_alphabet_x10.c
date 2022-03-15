#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 * followed by a newline
 */
void print_alphabet_x10(void)
{
	char mk;
	int i;

	i = 0;

	while (i < 10)
	{
		mk = 'a';
		while (mk <= 'z')
		{
			_putchar(mk);
			mk++;
		}
		_putchar('\n');
		i++;
	}
}
