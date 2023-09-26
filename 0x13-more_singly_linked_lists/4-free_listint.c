/*
 * File: 4-free_listint.c
 * Auth: Sweilam
 */

#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */

void free_listint(listint_t *head)
{
listint_t *traverser;
while (head)
{
traverser = head->next;
free(head);
head = traverser;
}

}
