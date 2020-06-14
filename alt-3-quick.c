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
	for (pivot = r[low], i = low, j = high; i < j;)	
	{
		for (; r[i] <= pivot; i++)
			;
		for (; r[j] > pivot; j--)
			;
		if (i < j)
			swappy = r[i], r[i] = r[j], r[j] = swappy, print_array(r, size);
	}
	swappy = r[low], r[low] = r[j], r[j] = swappy, print_array(r, size);
	return (j);
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
	int partition;	if (low < high)
	{
		partition = NotThatQuickThough(r, size, low, high);
		Quickboye(r, size, low, partition);
		Quickboye(r, size, partition + 1, high);
	}
}
/**
 * quick_sort - Quick sort algorithm
 * @array: Holds the array
 * @size: Size of the array
 * Return: None
 */ 
void quick_sorty(int *array, size_t size)
{
	if (array)
		Quickboye(array, size, 0, size - 1);
}