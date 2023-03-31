#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>

/**
 * struct list_t - single linked list
 * @str: string
 * @len: length of string
 * @next: points to the next node
 *
 * Description: single linked list node structure
 */
struct list_t {
	char *str;
	unsigned int len;
	struct list_t *next;
};
typedef struct list_t list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
