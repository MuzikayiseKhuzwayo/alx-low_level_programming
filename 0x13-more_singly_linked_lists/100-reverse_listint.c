#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head
 *
 * Description: if head is NULL, return NULL,
 *				if next is NULL, return head as is
 *				loop through list while node is not NULL
 *				set next node as the next of the current
 *				set current node's next to the previous node
 *				set the previous node to the current node
 *				set current node to next node
 *
 * Return: pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = NULL, *prev_node = NULL;

	if (*head == NULL || head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = (*head);
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
