#include "lists.h"

/**
 * get_nodeint_at_index - get nth node of a list
 * @head: Singly linked list
 * @index: Index of node
 *
 * Return: Node data
 * NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index && head != NULL; count++)
	{
		head = head->next;
	}

	return (head);
}
