#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list
 * @head: pointer to pointer to first node of the list
 * @index: index of the node to delete (starting from 0)
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *prev;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    current = *head;
    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    prev = current;
    current = current->next;
    for (i = 1; current != NULL && i <= index; i++)
    {
        prev = current;
        current = current->next;
    }

    if (i <= index)
        return (-1);

    prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = prev;
    free(current);
    return (1);
}
