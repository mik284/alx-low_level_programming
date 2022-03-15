#include "main.c"

/**
 * print_sign - prints the sign of number
 * @n: is the int to check
 * Return: 1 if + is greater t 0 print 0
 * -1 and prints - if n is less t 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
