#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 *
 * Description: if head is NULL, return NULL
 *				if not, loop through list while the element is not NULL
 *				if wanted node is found in bounds, then return it
 *				if it is not found then return NULL
 *
 * Return: the node at index @index, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp_node = head;
	unsigned int i = 0;

	while (temp_node && i < index)
	{
		temp_node = temp_node->next;
		i++;
	}

	return (temp_node);
}
