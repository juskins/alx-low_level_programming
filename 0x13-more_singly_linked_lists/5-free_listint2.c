#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - This function frees a listint_t list.
 * @head: pointer to the start of the list
 * Return: Returns void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
