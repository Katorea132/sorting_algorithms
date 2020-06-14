#include "sort.h"

/**
 * NotThatQuickTho - Not so fast fast boye
 * @r: Array
 * @size: Size
 * @low: Low limit
 * @high: High limit
 * Return: Proper index/Partition position
 */
int NotThatQuickTho(int *r, int size, int low, int high)
{
	int i, j, swappy, pivot;

	for (pivot = r[high], j = i = low; j < high; j++)
		if (r[j] < pivot)
		{
			if (r[i] != r[j])
				swappy = r[i], r[i] = r[j], r[j] = swappy, print_array(r, size);
			i++;
		}
	if (r[i] != r[high])
		swappy = r[i], r[i] = r[high], r[high] = swappy, print_array(r, size);
	return (i);
}
/**
 * Quickboi - Handles the quicksort algorithm rythm
 * @r: Array
 * @size: Size
 * @low: Low limit
 * @high: High limit
 * Return: None
 */
void Quickboi(int *r, int size, int low, int high)
{
	int partition;


	if (low < high)
	{
		partition = NotThatQuickTho(r, size, low, high);
		Quickboi(r, size, low, partition - 1);
		Quickboi(r, size, partition + 1, high);
	}
}
/**
 * quick_sort - Quick sort algorithm
 * @array: Holds the array
 * @size: Size of the array
 * Return: None
 */
void quick_sort(int *array, size_t size)
{
	if (array)
		Quickboi(array, size, 0, size - 1);
}
