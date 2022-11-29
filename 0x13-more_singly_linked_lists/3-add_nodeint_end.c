/*
 * File: 3-add_nodeint_end.c
 * Auth: Muideen A Ilori
 */

#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (current != NULL && current->next != NULL)
		current = current->next;
	if (current != NULL)
		current->next = new;
	else
		*head = new;
	return (new);
}
