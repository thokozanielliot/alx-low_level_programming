#include "lists.h"

/**
 * pop_listint - delete the head node of a list
 * @head: Singly linked list
 *
 * Return: Popped element
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp, *current;
	int data;

	if (*head != NULL)
		return (0);

	current = *head;
	data = current->n;
	tmp = current->next;

	free(current);
	*head = tmp;

	return (data);
}

