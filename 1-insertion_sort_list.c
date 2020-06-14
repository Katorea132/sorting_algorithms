#include "sort.h"
/**
 * insertion_sort_list - Insertion sort in lists :D
 * @list: Holds the list
 * Return: none
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *act, *prv, *lili;

	if (!list)
		return;
	for (lili = *list; lili;)
	{
		act = lili;
		for (lili = lili->next; act && act->prev;)
		{
			prv = act->prev;
			if (act->n < act->prev->n)
			{
				if (prv->prev)
					prv->prev->next = act;
				if (act->next)
					act->next->prev = prv;
				prv->next = act->next, act->prev = prv->prev;
				act->next = prv, prv->prev = act;
				if (!act->prev)
					*list = act;
				print_list((const listint_t *) *list);
			}
			else
				act = act->prev;
		}
	}
}
