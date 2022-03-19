#include "main.h"
#include <stdio.h>

/**
 * main - prints the number from 1 to 100 \n
 * but for multiple of 3points fizz intead of the no.
 * Return: 0 for succes
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			print(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
