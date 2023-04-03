#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head element
 * @n: number to be added as data
 *
 * Description: does malloc for sizeof a listint_t element to get a new
 *				element, then traverses linked list until the end
 *				then assigns string and len values
 *				then assigns next to head
 *
 * Return: address of new element if success or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element, *temp_element;
	int new_n = n;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = new_n;
	new_element->next = NULL;

	if (*head == NULL)
		*head = new_element;
	else if (*head)
	{
		temp_element = *head;
		while ((temp_element)->next)
			temp_element = (temp_element)->next;
		(temp_element)->next = new_element;
	}
	return (new_element);
}
