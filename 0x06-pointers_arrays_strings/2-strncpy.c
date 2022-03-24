#include "main.h"

/**
 * _strncpy - copies a string
 * @src: source of string
 * @dest: destination string
 * @n: number of bytes to copy
 * Return: pointer to the resulting string
 */
char *_strcpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++
	}

	return (dest);
}
