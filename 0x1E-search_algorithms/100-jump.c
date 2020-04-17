#include "search_algos.h"
/**
 * jump_search - search for a number in a jump way
 * @array: the input
 * @size: the size of the input
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
int jump_search(int *array, size_t size, int value)
{
	int i, s, e;
	int step = sqrt(size);

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i += step)
	{
		if (*(array + i) >= value)
		{
			s = i - step;
			e = i;
			return (helper(array, s, e, size, value));
		}
		printf("Value checked array[%i] = [%i]\n", i, *(array + i));
		if (*(array + i) == value)
			return (i);
	}
	return (helper(array, i - step, i, size, value));
}
/**
 * helper - helper to jump
 * @array: input array
 * @s: the beginning
 * @e: eing index
 * @size: size of array
 * @value: value to search for
 * Return: the index of the value, or -1 when the values is not present
 */
int helper(int *array, int s, int e, int size, int value)
{
	printf("Value found between indexes [%i] and [%i]\n",
			s, e);
	if (e >= size)
		e = size - 1;
	while (s <= e)
	{
		printf("Value checked array[%i] = [%i]\n",
				s, *(array + s));
		if (*(array + s) == value)
			return (s);
		s++;
	}
	return (-1);
}
