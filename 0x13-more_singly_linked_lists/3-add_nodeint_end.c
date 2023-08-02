#include "lists.h"

/**
 * add_nodeint_end - It adds a node at the end of a linked list.
 * @head: A pointer to first element in the list.
 * @n: The data to enter in the new element.
 *
 * Return: A pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;
	listint_t *temp = *head;

	last_node = malloc(sizeof(listint_t));
	if (!last_node)
		return (NULL);

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = last_node;

	return (last_node);
}

