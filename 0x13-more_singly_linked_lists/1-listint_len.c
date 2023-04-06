#include "lists.h"
#include <stdio.h>
/**
 * listint_len - This function returns length of the list
 * @h: variable that points to head of list to be printed
 * Return: returns number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}
