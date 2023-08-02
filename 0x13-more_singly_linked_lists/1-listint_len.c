#include "lists.h"

/**
 * listint_len - It returns number of elements in a linked lists.
 * @h: linked list of type listint_t to cover.
 *
 * Return: The number of nodes counted.
 */
size_t listint_len(const listint_t *h)
{
	size_t num1 = 0;

	while (h)
	{
		num1++;
		h = h->next;
	}

	return (num1);
}

