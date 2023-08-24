#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Defines a node for a single-direction linked list
 * @str: dynamic string reference
 * @len: character count in the string
 * @next: pointer leading to the subsequent node
 *
 * Description: Data structure for a single-linked list
 * suitable for multiple programming challenges
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
