#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Function that deletes the head node of a linked list
 * @head: double pointer to the list head
 * Return: Returns the head node's data value
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int i;

	if (*head == NULL)
		return (0);

	first = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(first);
	return (i);
}
