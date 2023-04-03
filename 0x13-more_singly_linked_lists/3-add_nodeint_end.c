#include "lists.h"

/**
 * add_nodeint_end - add new node at the edn of a list
 * @head: sngly linked list
 * @n: integer number to be added
 *
 * Return: address of new element
 * NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (*head);
}
