/*
 * File: 2-add_nodeint.c
 * Auth: Sweilam
 */

#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a node at the beggining of a list
 * @head: A pointer to the address head of the list_t list.
 * @n: number to be added
 * Return: Address of the new element or NULL.
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
