#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: eturn the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid = 0, i = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		mid = (left + right) / 2;
		if (value < array[mid])
			right = mid - 1;

		else if (value > array[mid])
			left = mid + 1;

		else
			return (mid);
	}

	return (-1);
}
