#include "lists.h"

/**
 * print_dlistint - a function that prints all
 * the elements of a dlistint_t list
 * @h: head node
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	if (!h)
	{
		printf("%s", "Empty list");
	}
	while (h)
	{
		
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
