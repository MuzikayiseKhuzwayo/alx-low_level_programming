#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at an index of a list
 * @head: pointer to the list
 * @index: index at which to delete, starting at 0
 *
 * Description: loop though list while node is not NULL and index not @index
 *				if node is NULL, it's unsuccessful
 *				set previous node's next to next node of current node
 *				free current node
 *				return successful inidcator
 *
 * Return: 1 (successful), or -1 (unsuccessful)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node = *head, *prev_node = *head;
	unsigned int i = 0, found = 0;

	if (head == NULL)
		return (-1);
	while (temp_node && i < index)
	{
		prev_node = temp_node;
		temp_node = temp_node->next;
		i++;
	}

	if (i == index)
		found = 1;

	if (temp_node == NULL || found == 0)
		return (-1);
	if (i == 0)
	{
		*head = temp_node->next;
		free(prev_node);
		return (1);
	}
	prev_node->next = temp_node->next;
	free(temp_node);
	return (1);
}
