#include "lists.h"

/**
 * sum_dlistint - summ of all the data (n) of a dlistint_t linked list
 * @head: double linked list
 *
 * Return: Sum of the list
 * 0 if list empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t * curr;

	for (curr = head; curr != NULL; curr->next)
		sum += curr->n;
	return (sum);
}
