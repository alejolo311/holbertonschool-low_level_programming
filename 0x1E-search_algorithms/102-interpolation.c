#include "search_algos.h"
/**
 * interpolation_search - search for a number in a interpolation way
 * @array: the input
 * @size: the size of the input
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
int interpolation_search(int *array, size_t size, int value)
{
	int s, e, p;

	if (array == NULL)
		return (-1);
	
    e = size - 1;
	s = 0;
	while (s <= e)
	{
		if (s == e)
		{
			if (*(array + s) == value)
				return (s);
			return (-1);
		}
		p = s + (((double)(e - s) / (array[e] - *(array + s)))
				* (value - *(array + s)));
		if (p > e)
		{
			printf("Value checked array[%i] is out of range\n", p);
			break;
		}
		printf("Value checked array[%i] = [%i]\n", p, *(array + p));
		if (*(array + p) == value)
			return (p);
		if (*(array + p) < value)
			s = p + 1;
		else
			e = p - 1;
	}
	return (-1);
}