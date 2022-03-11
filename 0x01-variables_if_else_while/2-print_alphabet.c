#include <stdio.h>

/**
 * main - will print the alphatbet in lowercase,
 * followed with a new line
 * Return: will be 0 (Succes)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
