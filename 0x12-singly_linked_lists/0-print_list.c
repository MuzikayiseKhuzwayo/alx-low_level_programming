#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first element of the linked list
 *
 * Description: uses the linked lists pointers to the next node to
 *				traverse the singly linked list while the nodes are
 *				not pointing to NULL. Prints contents of str and len
 *
 * Return: size of linked link in size_t type
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		i++;
		h = h->next;
	}

	return (i);
}
