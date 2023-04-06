#include "lists.h"
#include <stlib.h>
/*
 * delete_nodeint_at_index - This function deletes the node at an
 * 			of a linked list
 * @head: A double pointer to the 1st head node
 * @index: index of the node we want to delete
 * Return: returns success  or failure if (1) or (-1)
 */

int delete_nodeint_at_index(lisint_t **head, unsigned int index)
{
	listint_t *temp, *mov = *head;
	unsigned int node;
	if (mov == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(mov);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (mov->next == NULL)
			return (-1);
		mov = mov->next;
	}

	temp = mov->next;
	mov->next =  temp->next;
	free(temp);
	return (1);
}
