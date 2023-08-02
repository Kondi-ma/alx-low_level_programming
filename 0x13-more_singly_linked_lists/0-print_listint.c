#include "lists.h"

/**
 * print_listint - It prints all elements of a linked list.
 * @h: The linked list of type listint_t to print.
 *
 * Return: The number of nodes printed.
 */
size_t print_listint(const listint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nod++;
		h = h->next;
	}

	return (nod);
}

