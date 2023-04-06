#include "lists.h"
#include <stdio.h>
/**
 * print_listint - This function prints every elements of the list
 * @h: variable that points to head of list to be printed
 * Return: returns number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
