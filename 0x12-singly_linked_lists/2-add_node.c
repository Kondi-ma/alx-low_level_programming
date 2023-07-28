#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds new node at beginning of a linked list
 * @head: A double pointer to the list_t list
 * @str: A new string to add in the node
 *
 * Return: Address of new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ke;
	unsigned int len = 0;

	while (str[len])
		len++;

	ke = malloc(sizeof(list_t));
	if (!ke)
		return (NULL);

	ke->str = strdup(str);
        ke->len = len;
	ke->next = (*head);
	(*head) = ke;

	return (*head);
}

