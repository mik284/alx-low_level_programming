#include "main.c"

/**
 * _isalpha - checks for alphabetic character
 * @c: is a letter
 * Return: 1 if c is a lowercase or uppercase or 0
 */
int _isalpha(int c);
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
