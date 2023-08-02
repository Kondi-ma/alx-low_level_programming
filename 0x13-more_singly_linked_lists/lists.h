#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_l - singly linked list
 * @n: An integer
 * @next: It points to the next node
 *
 * Description: A singly linked list node structure
 */
typedef struct listint_l
{
        int n;
        struct listint_l *next;
} listint_t;

int pop_listint(listint_t **head);
int sum_listint(listint_t *head);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
listint_t *find_listint_loop(listint_t *head);
listint_t *reverse_listint(listint_t **head);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);
size_t free_listint_safe(listint_t **h);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);

#endif
