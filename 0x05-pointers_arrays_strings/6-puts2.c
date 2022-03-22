#include "main.h"

/**
 * puts2 - prints every other cahracterof string
 * starting with the 1st char and a newline
 * @str: is the character to set the print
 */
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
