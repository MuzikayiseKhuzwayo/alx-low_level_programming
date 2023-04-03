#include "lists.h"

/**
 * safe_list - creates a safe list for printing and checking
 * @list: list of nodes
 * @size: size of the current list
 * @node: current node that is being checked in printing
 *
 * Description: creates a new list that can be checked against for
 *				possible looped lists
 *
 * Return: const list that can be used to check
 */
const listint_t **safe_list(const listint_t **list, int size,
							const listint_t *node)
{
	const listint_t **new_list;
	int i;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		new_list[i] = list[i];

	new_list[i] = node;
	free(list);
	return (new_list);
}

/**
 * print_listint_safe - safely prints a linked list
 * @head: pointer to the head node of list
 *
 * Description: loop through as long as head is not NULL
 *				use a safe list to check if current node is being repeated
 *				if it is being repeated, print repeat message then return
 *				if not, create a new list and print safely
 *				set current node to the next node and continue printing
 *
 * Return: number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t **list = NULL;
	int i = 0, j = 0;

	while (head)
	{
		while (j < i)
		{
			if (head == list[j])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (i);
			}
			j++;
		}
		i++, j = 0;
		list = safe_list(list, i, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (i);
}
