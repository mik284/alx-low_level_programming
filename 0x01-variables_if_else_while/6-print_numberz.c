#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting
 * from 0, followed by a new line, using putchar only
 * Return: 0 always for success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}