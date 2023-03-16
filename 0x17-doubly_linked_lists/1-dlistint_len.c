#include "lists.h"

/**
 * @h: head pointer of the doubly linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        h = h->next;
        count++;
    }

    return (count);
}
