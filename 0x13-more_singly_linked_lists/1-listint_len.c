#include "lists.h"

/**
 * listint_len - return number of elements in a list
 * @h: singly linked list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
