#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - This function frees a listint_t list.
 * @head: pointer to the start of the list
 * Return: Returns void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
