#include "sort.h"
/**
 * selection_sort - Uses the selection sort algorithm
 * @r: Holds the array
 * @size: The size of the array
 * Return: none
 */
void selection_sort(int *r, size_t size)
{
	unsigned int i, j, min;
	int tmp;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j <= size; j++)
			if (r[i] > r[j])
				min = j;
		if (r[i] > r[min])
			tmp = r[i], r[i] = r[min], r[min] = tmp, print_array(r, size);
	}
}
