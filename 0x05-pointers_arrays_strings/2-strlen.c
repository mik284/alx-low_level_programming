#include "main.h"

/**
 * _strlen - that returns the length of a string
 * @s: is the character to be checked its length
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '0')
	{
		i++;
	}

	return (i);
}
