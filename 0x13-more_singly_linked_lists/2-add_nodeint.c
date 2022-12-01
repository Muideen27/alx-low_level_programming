/*
 * File: 2-add_nodeint.c
 * Auth: Muideen A ilori
 */

#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning
 *               of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *newhead = NULL;

	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL && n != 0)
		return (NULL);
	newhead->n = n;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
