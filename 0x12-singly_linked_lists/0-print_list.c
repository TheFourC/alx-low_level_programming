#include <stdio.h>
#include "lists.h"

/**
 * print_list - Outputs all elements of a list_t list
 * @h: reference to the list_t list to display
 *
 * Return: count of nodes displayed
 */
size_t print_list(const list_t *h)
{
    size_t nodes_count = 0;
    const list_t *current = h;

    while (current)
    {
        if (!current->str)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", current->len, current->str);

        current = current->next;
        nodes_count++;
    }

    return nodes_count;
}
