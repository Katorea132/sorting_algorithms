#include "sort.h"
/**
 * swapitron - Swaps
 * @lili: Holds a pointer to the head
 * @lino: First node to swap
 * @linen: Second node sto swap
 * Return: none
 */
void swapitron(listint_t **lili, listint_t *lino, listint_t *linen)
{
	if (lino->prev)
		lino->prev->next = linen;
	if (linen->next)
		linen->next->prev = lino;
	lino->next = linen->next, linen->prev = lino->prev;
	linen->next = lino, lino->prev = linen;
	if (!linen->prev)
		*lili = linen;
	print_list((const listint_t *) *lili);
}
/**
 * cocktail_sort_list - Sorts
 * @list: Holds the list
 * Return: None
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *prv, *nex, *lili;
	int swappy = 1;

	if (!list)
		return;
	for (lili = *list; swappy != 0;)
	{
		swappy = 0;
		for (; lili && lili->next;)
		{
			nex = lili->next;
			if (lili->n > nex->n)
			{
				swapitron(list, lili, nex), swappy = 1;
			}
			else
				lili = lili->next;
		}
		for (; lili && lili->prev && swappy != 0;)
		{
			prv = lili->prev;
			if (prv->n > lili->n)
			{
				swapitron(list, prv, lili), swappy = 1;
			}
			else
				lili = lili->prev;
		}
	}
}
