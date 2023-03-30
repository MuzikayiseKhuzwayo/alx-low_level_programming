#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head element
 * @str: string value to be stored inside the new element
 *
 * Description: does malloc for sizeof a list_t element to get a new element,
 *				then assigns string and len values
 *				then assigns next to head
 *
 * Return: address of new element if success or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	int string_len;
	char *string;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);

	if (str != NULL)
	{
		string_len = strlen(str);
		string = strdup(str);
	}
	else
	{
		string_len = 0;
		string = NULL;
	}

	new_element->str = string;
	new_element->len = string_len;
	new_element->next = *head;
	*head = new_element;

	return (*head);
}
