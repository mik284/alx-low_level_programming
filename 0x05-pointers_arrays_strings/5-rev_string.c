#include "main.h"

/**
 * rev_string - reverses a string
 * @s: rep the string character to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, k, m;

	k = 0;
	m = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	m = k - 1;

	for (i = 0; i < k / 2; i++)
	{
		tmp = s[i];
		s[i] = s[m];
		s[m--] = tmp;
	}
}
