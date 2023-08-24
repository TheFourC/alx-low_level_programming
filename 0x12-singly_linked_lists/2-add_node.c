#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Double pointer to the list_t list.
 * @str: New string to add to the node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    unsigned int len = 0;
    unsigned int i; /* Moved declaration here */
    char *new_str;

    if (!str || !head)
    {
        return NULL;
    }

    /* Calculate the length of the string */
    while (str[len])
    {
        len++;
    }

    new_node = (list_t *)malloc(sizeof(list_t));
    if (!new_node)
    {
        return NULL;
    }

    /* Allocate memory for the new string */
    new_str = (char *)malloc(len + 1); /* +1 for the null terminator */

    if (!new_str)
    {
        free(new_node);
        return NULL;
    }

    /* Copy the string manually */
    for (i = 0; i < len; i++)
    {
        new_str[i] = str[i];
    }
    new_str[len] = '\0';

    new_node->str = new_str;
    new_node->len = len;
    new_node->next = *head;
    *head = new_node;

    return *head;
}
