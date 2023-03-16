#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added.
 * @n: The data for the new node.
 *
 * Return: If successful - a pointer to the new node.
 *         Otherwise - NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (temp)
	{
		if (i == idx - 1)
		{
			new->prev = temp;
			new->next = temp->next;
			if (temp->next)
				temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}

	free(new);
	return (NULL);
}
