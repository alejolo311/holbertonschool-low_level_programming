#include "search_algos.h"
/**
 * advanced_binary - search for a number in a binary way
 * @array: the input
 * @size: the size of the input
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (helperBinary(array, 0, size - 1, value));
}
/**
 * helperBinary - search for a number in a binary way
 * @array: the input
 * @s: the begining
 * @e: the end
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
int helperBinary(int *array, int s, int e, int value)
{
	int m, i;

	printf("Searching in array: ");
	for (i = s; i < e; i++)
	{
		printf("%i, ", *(array + i));
	}
	printf("%i\n", *(array + i));
	m = ((e - s) / 2) + s;
	if (*(array + m) == value && *(array + (m - 1)) != value)
		return (m);
	if (s == e)
		return (-1);
	if (*(array + m) >= value)
		return (helperBinary(array, s, m, value));
	if (*(array + m) < value)
		return (helperBinary(array, m + 1, e, value));
	return (-1);
}
