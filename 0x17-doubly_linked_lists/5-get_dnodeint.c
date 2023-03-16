#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to retrieve
 *
 * Return: Pointer to the nth node of the list, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i;

    for (i = 0; head != NULL && i < index; i++)
        head = head->next;

    return (i == index ? head : NULL);
}
