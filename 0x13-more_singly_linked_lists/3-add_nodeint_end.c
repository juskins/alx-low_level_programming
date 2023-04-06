#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Function that sums a new node at the end of a linked list
 * @head: A double pointer to the head of the list
 * @n: An integer to add to the list
 * Return: An address to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_Node, *end;

	new_Node = malloc(sizeof(listint_t));
	if (new_Node == NULL)
		return (NULL);

	new_Node->n = n;
	new_Node->next = NULL;
	if (*head == NULL)
		*head = new_Node;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new_Node;
	}
	return (*head);
}

