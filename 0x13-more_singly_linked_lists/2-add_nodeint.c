#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - This function adds a new node to the beginning of a list
 * @head: It is a double pointer to the beginning of the linked list
 * @n: It is an integer to add aa new node
 * Return: returns address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_Node;

	if (head == NULL)
		return (NULL);
	new_Node = malloc(sizeof(listint_t));
	if (new_Node == NULL)
		return (NULL);
	new_Node->n = n;
	new_Node->next = *head;
	*head = new_Node;
	return (new_Node);
}

