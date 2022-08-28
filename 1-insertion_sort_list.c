#include "sort.h"

/**
 * insertion_sort_list - insertion sort list
 * 
 * @list: list to be sorted
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL, *pos = NULL, *prev = NULL;

	if (!list || !(*list))
	{}
	else
	{
		temp = (*list)->next;
		while (temp)
		{
			pos = temp, prev = temp->prev;
			while (prev && prev->n > pos->n)
			{
				pos->prev = prev->prev;
				prev->next = pos->next;
				pos->next = prev, prev->prev = pos;
				if (prev->next)
					prev->next->prev = prev;
				if (pos->prev)
					pos->prev->next = pos;
				else
					*list = pos;
				print_list(*list);
				prev = pos->prev;
			}
			temp = temp->next;
		}
	}
}