#include <stdio.h>

/**
 * main- print all posible combination of single-digit
 * numbers
 * Return: 0 always success
 */
int main(void)
{
	int n;

	for (n = '0'; n < '10'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
