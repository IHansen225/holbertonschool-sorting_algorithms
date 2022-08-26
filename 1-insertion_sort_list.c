#include "sort.h"

/**
 * insertion_sort_list - insertion sort list
 * 
 * @list: list to be sorted
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *pos = *list, *pos2;
	int m = 0;

	for (pos = *list; pos->next; pos = pos->next)
	{
		if ((pos->n) > (pos->next->n))
		{
			temp = pos->next, pos->next = pos->next->next;
			for (pos2 = *list; pos2->next; pos2 = pos2->next)
			{
				if ((pos2->n) > (temp->n))
				{
					temp->prev = pos2->prev;
					temp->next = pos2;
					if (pos2->prev)
						pos2->prev->next = temp;
					else
						*list = temp;
					pos2->prev = temp;
					pos = *list;
					break;
				}
			}
			print_list(*list);
		}
	}
}
