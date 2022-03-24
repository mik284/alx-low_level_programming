#include "main.h"

/**
 * _strncat - concatenate n bytes from a string to another
 * @dest: destination string
 * @str: source string
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *str, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
