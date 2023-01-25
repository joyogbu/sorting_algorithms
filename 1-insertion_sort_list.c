#include "sort.h"

/**
 * sortinsert - insert  node in a sorted doubly linked list
 * @list: list to sort
 * @newNode: new node to be added
 * Return - nothing
 */

void sortinsert(listint_t **list, listint_t *newNode)
{
	listint_t *tmp;

	if (*list == NULL)
	{
		*list = newNode;
	}
	else if ((*list)->n > newNode->n)
	{
		newNode->next = *list;
		newNode->next->prev = newNode;
		*list = newNode;
	}
	else
	{
		tmp = *list;
		while (tmp->next !=  NULL && tmp->next->n < newNode->n)
		{
			tmp = tmp->next;
		}
		newNode->next = tmp->next;
		if (tmp->next != NULL)
		{
			newNode->next->prev = newNode;
		}
		tmp->next = newNode;
		newNode->prev = tmp;
	}
}


/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order usinh the insertion sort algorithm
 * @list: lost to sort
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL;
	listint_t *tmp = *list;

	if (*list == NULL)
		return;
	while (tmp != NULL)
	{
		listint_t *next = tmp->next;

		tmp->prev = tmp->next = NULL;
		sortinsert(&sorted, tmp);
		print_list(sorted);
		tmp = next;
	}
	*list = sorted;
}
