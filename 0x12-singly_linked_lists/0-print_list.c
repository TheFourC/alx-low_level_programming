#include <stdio.h>
#include "lists.h"

/**
 * print_list - Outputs all elements of a list_t list
 * @lst: reference to the list_t list to display
 *
 * Return: count of nodes displayed
 */
size_t print_list(const list_t *lst)
{
    size_t nodes_displayed = 0;
    const list_t *current_node = lst;

    while (current_node)
    {
        if (!current_node->str)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", current_node->len, current_node->str);

        current_node = current_node->next;
        nodes_displayed++;
    }

    return nodes_displayed;
}
