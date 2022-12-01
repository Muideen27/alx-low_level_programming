i/*
 * File: 9-insert_nodeint.c
 * Auth: Muideen A Ilori
 */

#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current;
	listint_t *new;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	current = *head;
	count = 0;
	if (current == NULL && index != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (count != index - 1)
	{
		current = current->next;
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		count++;
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
