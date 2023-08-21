#include "lists.h"

/**
 * dlistint_len - return the number of elements in a linked dlistint_t
 * @h: doubly linked list
 * 
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
