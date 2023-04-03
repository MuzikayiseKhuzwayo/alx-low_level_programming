#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the linked list
 *
 * Description: if list is empty (NULL), returns 0
 *				stores the n value of the node to return later
 *				sets the head to the next element of the list
 *				frees that popped element, then returns the stored n value
 *
 * Return: n value of node, 0 if head in NULL
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_element = *head;
	int new_n;

	if (*head == NULL)
		return (0);

	new_n = temp_element->n;
	*head = temp_element->next;
	free(temp_element);

	return (new_n);
}
