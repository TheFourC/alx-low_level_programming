#include <stdlib.h>
#include "lists.h"

char *strdup(const char *s);  /* Explicit declaration of strdup */

/**
 * add_node_end - Appends a node to the tail of a linked list.
 * @head: Reference to the starting node of the list.
 * @str: Content for the new node.
 *
 * Return: Pointer to the newly created element, or NULL if unsuccessful.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node;
    list_t *current = *head;
    unsigned int length = 0;

    /* Determine the size of the provided string */
    while (str[length])
    {
        length++;
    }

    /* Allocate memory for a new list node */
    new_node = (list_t *)malloc(sizeof(list_t));
    if (!new_node)
    {
        return NULL;
    }

    /* Duplicate the string for the new node */
    new_node->str = strdup(str);
    if (!new_node->str)
    {
        free(new_node);
        return NULL;
    }

    new_node->len = length;
    new_node->next = NULL;

    /* If list is empty, set new node as head */
    if (*head == NULL)
    {
        *head = new_node;
        return new_node;
    }

    /* Navigate to the end of the list */
    while (current->next)
    {
        current = current->next;
    }

    /* Append new node to the list */
    current->next = new_node;

    return new_node;
}
