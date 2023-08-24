#include <stdlib.h>
#include "lists.h"

/**
 * list_len - computes and returns the length of a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: length of the list.
 */
size_t list_len(const list_t *head)
{
    size_t countyboi = 0;
    const list_t *current;  /* Declare the iterator pointer outside the for loop */

    /* Iterate over each node in the linked list */
    for (current = head; current != NULL; current = current->next)
    {
        countyboi++;
    }

    return countyboi;
}
