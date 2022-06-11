#include "lists.h"

/**
 * dlistint_len - a function that returns the number
 * of elements in a linked dlistint_t list
 * @h: head node
 *
 * Return: lenght of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
	{
		printf("%s", "Empty list");
	}
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
