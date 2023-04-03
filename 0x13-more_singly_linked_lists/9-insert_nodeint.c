#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head node
 * @idx: index of new node addition, starting at 0
 * @n: n value of new node
 *
 * Description: loop through list while node is not null and index not @idx
 *				if node is NULL, return NULL
 *				if not NULL, then create a new node with @n as the n value
 *				set the next of the new node as the current node
 *				set previous node's next to point to new node
 *
 * Return: address of the new Node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp_node, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp_node = *head;
	while (i < (idx - 1))
	{
		if (temp_node == NULL || temp_node->next == NULL)
			return (NULL);
		temp_node = temp_node->next;
		i++;
	}

	new_node->next = temp_node->next;
	temp_node->next = new_node;

	return (new_node);
}
