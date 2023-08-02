#include "lists.h"

/**
 * add_nodeint - It adds new node at beginning of a linked list.
 * @head: The pointer to first node in the list.
 * @n: The data to put in new node.
 *
 * Return: The pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

