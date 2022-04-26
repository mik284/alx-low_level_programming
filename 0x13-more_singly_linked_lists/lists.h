#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for 0x13 C project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


size_t print_listint(const list_t *h);

#endif
