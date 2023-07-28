#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *time;

	while (head)
	{
		time = head->next;
		free(head->str);
		free(head);
		head = time;
	}
}

