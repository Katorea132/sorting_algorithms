#include "sort.h"
/**
 * shell_sort - SOrts}
 * @array: Holds the array
 * @size: SIze of array
 * Return: none
 */
void shell_sort(int *array, size_t size)
{
	unsigned int inter, i, j;
	int swappy;

	if (!array)
		return;
	for (inter = 1; inter < size; inter = inter * 3 + 1)
		;
	for (inter = (inter - 1) / 3; inter > 0; inter = (inter - 1) / 3)
	{
		for (i = inter; i < size; i++)
		{
			swappy = array[i];
			for (j = i; j > inter - 1 && array[j - inter] > swappy; j -= inter)
				array[j] = array[j - inter];
			array[j] = swappy;
		}
	print_array(array, size);
	}
}
