#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0 always succes
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchr('\n');
	return (0);
}
