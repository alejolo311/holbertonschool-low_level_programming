#include "search_algos.h"
/**
 * exponential_search - search for a number in a exponential way
 * @array: the input
 * @size: the size of the input
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
int exponential_search(int *array, size_t size, int value)
{
	int s, e;

	if (array == NULL)
		return (-1);
	if (*(array) == value)
		return (0);

	e = size - 1;
	s = 1;
	while (s <= e)
	{
		if (*(array + s) >= value)
			return (helperexp(array, s / 2, s, value));
		printf("Value checked array[%d] = [%d]\n", s, *(array + s));
		s *= 2;
	}
	return (helperexp(array, s / 2, e, value));
}
/**
 * helperexp - search for a number in a exponential way
 * @array: the input
 * @s: the beginning
 * @e: the end
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
int helperexp(int *array, int s, int e, int value)
{
	int m, i;

	printf("Value found between indexes [%i] and [%i]\n", s, e);
	while (s <= e)
	{
		printf("Searching in array: ");
		for (i = s; i < e; i++)
		{
			printf("%i, ", *(array + i));
		}
		printf("%i\n", *(array + i));
		m = (s + e) / 2;
		if (value > *(array + m))
			s = m + 1;
		else if (value < *(array + m))
			e = m - 1;
		else
			return (m);
	}
	return (-1);
}
