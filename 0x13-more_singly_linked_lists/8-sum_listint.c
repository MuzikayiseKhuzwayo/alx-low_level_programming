#include "lists.h"

/**
 * sum_listint - gives sum of all the data (n) of a listint_t linked list
 * @head: head of the linked list
 *
 * Description: while node is not NULL, it loops through the nodes
 *				every time a valid node is found, it adds to sum
 *				returns the sum of all the n values of the list
 *
 * Return: sum of all nodes, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp_node = head;
	int sum = 0;

	while (temp_node)
	{
		sum += temp_node->n;
		temp_node = temp_node->next;
	}

	return (sum);
}
