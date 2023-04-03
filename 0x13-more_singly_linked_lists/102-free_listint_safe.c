#include "lists.h"

/**
 * get_safe_list - creates a safe list for printing and checking
 * @list: list of nodes
 * @size: size of the current list
 * @node: current node that is being checked in printing
 *
 * Description: creates a new list that can be checked against for
 *				possible looped lists
 *
 * Return: const list that can be used to check
 */
listint_t **get_safe_list(listint_t **list, int size, listint_t *node)
{
	listint_t **new_list;
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
 * free_listint_safe - safely frees a listint_t list
 * @h: pointer to the head Node of the list
 *
 * Description: lists may be unsafe and loopy, this function frees lists
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next_node;
	listint_t **list = NULL;
	int i = 0, j = 0;

	while (*h)
	{
		while (j < i)
		{
			if (*h == list[j])
			{
				*h = NULL;
				free(list);
				return (i);
			}
			j++;
		}
		i++, j = 0;
		list = get_safe_list(list, i, *h);
		next_node = (*h)->next;
		free(*h);
		*h = next_node;
	}
	free(list);
	return (i);
}
