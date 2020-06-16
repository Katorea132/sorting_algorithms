#include "sort.h"
/**
 * NotThatQuickTho
 * @r: Array
 * @size: Size
 * @low: Low limit
 * @high: High limit
 * Return: Proper index/Partition position
 */
int NotThatQuickThough(int *r, int size, int low, int high)
{
	int i, j, swappy, pivot;

	for (pivot = r[high], i = low - 1, j = high + 1; i < size;)	
	{
		for (; r[++i] < pivot;)
			;
		for (; r[--j] > pivot;)
			;
		if (i < j)
		{
			if (r[i] != r[j])
				swappy = r[i], r[i] = r[j], r[j] = swappy,print_array(r, size);
		}
		else
			break;
	}
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
void Quickboye(int *r, int size, int low, int high)
{
	int partition;	
	if (low < high)
	{
		partition = NotThatQuickThough(r, size, low, high);
		Quickboye(r, size, low, partition - 1);
		Quickboye(r, size, partition, high);
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
		Quickboye(array, size, 0, size - 1);
}