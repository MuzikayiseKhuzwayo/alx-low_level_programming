#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: linked list of listint_t type
 *
 * Description: cycles through linked list until next points to null
 *				while adding to some counter variable.
 *
 * Return: number of counted elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
