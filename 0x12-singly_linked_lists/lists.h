#ifndef SIMPLE_LIST_H
#define SIMPLE_LIST_H

/**
 * struct item_s - Defines a single node in a singly linked list.
 * @data: A dynamically allocated string.
 * @data_len: Holds the length of the string.
 * @next_item: Points to the subsequent node.
 *
 * Description: Structure defining a node for a project at Holberton Academy.
 */
typedef struct item_s
{
    char *data;
    unsigned int data_len;
    struct item_s *next_item;
} item_t;

size_t show_list(const item_t *start);
size_t measure_list(const item_t *start);
item_t *prepend_node(item_t **first, const char *data);
item_t *append_node(item_t **first, const char *data);
void release_list(item_t *first);

#endif

