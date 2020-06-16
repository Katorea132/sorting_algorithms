#include "sort.h"
/**
 * NotThatQuick - asd
 * @r: Array
 * @size: Size
 * @low: Low limit
 * @high: High limit
 * Return: Proper index/Partition position
 */
int NotThatQuick(int *r, int size, int low, int high)
{
	int i, j, swappy, pivot;

	for (pivot = r[high], i = low - 1, j = high + 1; i < j;)
	{
		for (; r[++i] < pivot;)
			;
		for (; r[--j] > pivot;)
			;
		if (i < j)
			if (r[i] != r[j])
				swappy = r[i], r[i] = r[j], r[j] = swappy, print_array(r, size);
	}
	return (i);
}
/**
 * Quick - Handles the quicksort algorithm rythm
 * @r: Array
 * @size: Size
 * @low: Low limit
 * @high: High limit
 * Return: None
 */
void Quick(int *r, int size, int low, int high)
{
	int partition;

	if (low < high)
	{
		partition = NotThatQuick(r, size, low, high);
		Quick(r, size, low, partition - 1);
		Quick(r, size, partition, high);
	}
}
/**
 * quick_sort_hoare - Quick sort algorithm
 * @array: Holds the array
 * @size: Size of the array
 * Return: None
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array)
		Quick(array, size, 0, size - 1);
}
