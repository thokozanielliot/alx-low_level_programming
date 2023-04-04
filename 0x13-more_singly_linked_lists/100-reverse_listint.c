#include "lists.h"

/**
 * reverse_listint - reverse a singly linked list
 * @head: Singly linked list
 *
 * Return: A pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	next = NULL;

	while (*head != NULL)
	{
		/* Store next */
		next = (*head)->next;

		/* Reverse *head node's pointer */
		(*head)->next = prev;

		/* Move pointers one position ahead */
		prev = *head;
		*head = next;
	}
	*head = prev;
	
	return (*head);
}
