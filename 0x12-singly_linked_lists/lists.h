#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - List is singly linked
 * @str: string - (String is malloc'ed)
 * @len: The length of string
 * @next: It points to next node
 *
 * Description: A singly linked node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
void free_list(list_t *head);

#endif

