#include "main.h"

/**
 * *_strcpy - copies the stringspointed to by src
 * including \0 null byte
 * the buffer pointed to by dest
 * @dest: pointer to the buffer
 * @src: pointer to buffer the new copy string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int m, i;

	m = 0;

	while (src[m] != '\0')
	{
		m++;
	}

	for (i = 0; i < m; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\n';

	return (dest);
}
