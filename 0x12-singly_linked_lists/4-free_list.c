#include "lists.h"

/**
 * free_list - frees a list_t list including all values inside
 * @head: pointer to the head of the list to be freed
 *
 * Description: go through the list while head is not NULL
 *				free the str element, then free the object itself
 *				then assign next of that element to next of head
 *				then free head after everything is done
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp_element = head, *temp_element_2;

	while (temp_element)
	{
		free(temp_element->str);
		temp_element_2 = temp_element;
		temp_element = temp_element->next;
		free(temp_element_2);
	}
}
