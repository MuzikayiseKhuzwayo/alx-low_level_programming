#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the first element of the linked list
 *
 * Description: uses the linked lists pointers to the next node to
 *				traverse the singly linked list while the nodes are
 *				not pointing to NULL. Prints contents of integer inside
 *
 * Return: size of linked list in size_t type
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);

		i++;
		h = h->next;
	}

	return (i);
}
