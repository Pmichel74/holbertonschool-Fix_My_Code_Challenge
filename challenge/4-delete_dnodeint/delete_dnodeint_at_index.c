#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *to_delete;
    unsigned int i = 0;

    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;

    if (index == 0)
    {
        to_delete = *head;
        *head = to_delete->next;
        if (*head)
            (*head)->prev = NULL;
        free(to_delete);
        return (1);
    }

    while (current && i < index)
    {
        current = current->next;
        i++;
    }
    if (!current)
        return (-1);

    to_delete = current;
    if (to_delete->prev)
        to_delete->prev->next = to_delete->next;
    if (to_delete->next)
        to_delete->next->prev = to_delete->prev;
    free(to_delete);
    return (1);
}
