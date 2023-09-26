/*
 * File: 1-listint_len.c
 * Auth: Sweilam
 */

#include "lists.h"
#include <stdio.h>

/**
 * listint_len - finds the length  listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */

size_t listint_len(const listint_t *h)
{
size_t elements = 0;
while (h != NULL)
{
elements++;
h = h->next;
}
return (elements);
}
