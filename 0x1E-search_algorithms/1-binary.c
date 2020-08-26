#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binarySearch - A recursive binary search function
 * @array: given array
 * @left: beginning position
 * @right: end position
 * @value: is the value to search for
 * Return: location of value in given array if present, otherwise -1
 */
int binarySearch(int *array, size_t left, size_t right, int value)
{
	size_t i;
	int mid;

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i <= right - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (left + right) / 2;

		/*If the element is present at the middle: itself*/
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			return (binarySearch(array, mid + 1, right, value));
		else
			return (binarySearch(array, left, mid - 1, value));
	}
	return (-1);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binarySearch(array, 0, size - 1, value));
}
