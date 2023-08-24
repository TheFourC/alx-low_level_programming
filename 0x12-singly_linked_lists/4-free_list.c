#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Releases memory occupied by a linked list.
 * @head: Initial node of the list_t list to be released.
 */
void free_list(list_t *head)
{
    list_t *next_node;

    /* Loop through each node in the list */
    while (head)
    {
        next_node = head->next;  /* Store reference to the next node */

        /* Release memory for the string and the current node */
        free(head->str);
        free(head);

        head = next_node;  /* Move to the next node in the list */
    }
}
