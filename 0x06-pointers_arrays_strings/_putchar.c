#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on succes 1
 * On erro, -1 is returned, and error is set to approprietly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
