#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_t - singly linked list
 * @n : integer
 * @next: ponts to the next node
 *
 * Description: Singly linked list node structure that cotains integers only
 *
 */
typedef struct listint_t
{
	int n;
	struct listint_t *next;
}listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
