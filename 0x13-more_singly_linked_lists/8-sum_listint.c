#include "lists.h"
/**
 * sum_listint - Function finds the sum of all the data
 * @head: pointer to the head node in the list
 * Return: Returns sum of all data
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (sum);
}
