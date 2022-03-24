#include "main.h"

/**
 * _strcmp - Function compares two strings
 * @s1: rep the 1st string to compare
 * @s2: rep the 2nd string to compare
 *
 * Return: less than 0 is s1
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
