#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head element
 * @n: number to be added as data
 *
 * Description: does malloc for sizeof a listint_t element to get a new
 *				element, then assigns string and len values
 *				then assigns next to head
 *
 * Return: address of new element if success or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;
	int new_n = n;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = new_n;
	new_element->next = *head;
	*head = new_element;

	return (*head);
}
