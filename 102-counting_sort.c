#include "sort.h"
/**
 * counting_sort - Sorts
 * @array: Array
 * @size: Size of array
 * Return: None
 */
void counting_sort(int *array, size_t size)
{
	int siz, j, *cntArr, *tmpArr;
	unsigned int i;

	if (!array)
		return;
	for (i = 0, siz = 0; i < size; i++)
		if (array[i] > siz)
			siz = array[i];
	cntArr = malloc(sizeof(int) * (siz + 1));
	if (!cntArr)
		return;
	tmpArr = malloc(sizeof(int) * size);
	if (!tmpArr)
	{
		free(cntArr);
		return;
	}
	for (i = 0; i < size; i++)
		tmpArr[i] = array[i];
	for (i = 0; i < size; i++)
		cntArr[array[i]]++;
	for (i = 0, j = 1, siz += 1; j < siz; j++, i++)
		cntArr[j] += cntArr[i];
	print_array(cntArr, siz);
	for (i = 0; i < size; i++)
		array[cntArr[tmpArr[i]] - 1] = tmpArr[i];
	free(cntArr), free(tmpArr);
}
