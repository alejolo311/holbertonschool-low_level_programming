#include "search_algos.h"
/**
 * linear_search - search for a number in a linear way
 * @array: the input
 * @size: the size of the input
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, *(array + i));
		if (*(array + i) == value)
			return (i);
	}
	return (-1);
}
