#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list
 * @head: double linked list
 * @index: index of element to retrieve
 *
 * Return: element
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i = 0;

	curr = head;
	while (curr != NULL)
	{
		if (i == index)
			return (curr);
		curr = curr->next;
		i++;
	}
	return (NULL);
}
