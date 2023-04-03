#include "lists.h"

/**
 * print_listint - print all elements of a list
 * @h: singly linked structure
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	
	return (i);
}
