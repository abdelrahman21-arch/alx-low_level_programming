/*
 * File: 5-free_listint2.c
 * Auth: Sweilam
 */

#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 *
 * Return: nothing.
*/

void free_listint2(listint_t **head)
{
listint_t *traverser;
if (head == NULL)
 return;
while (*head)
{
traverser = (*head)->next;
free(*head);
*head = traverser;
}
head = NULL;
}
