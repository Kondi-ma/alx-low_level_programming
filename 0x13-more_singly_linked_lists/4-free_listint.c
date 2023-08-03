#include "lists.h"

/**
 * free_listint - This frees a linked list.
 * @head: The  listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *fr;

	while (head)
	{
		fr = head->next;
		free(head);
		head = fr;
	}
}

