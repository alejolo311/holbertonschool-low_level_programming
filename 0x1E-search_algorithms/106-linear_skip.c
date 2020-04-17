#include "search_algos.h"
/**
 * linear_skip - search for a number in a linear skiping way
 * @list: the input
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *s, *e;

	if (list == NULL)
		return (NULL);
	e = list;
	while (e != NULL)
	{
		s = e;
		if (e->express)
			e = e->express;
		else
		{
			for (; e->next;)
				e = e->next;
			break;
		}
		printf("Value checked at index [%li] = [%i]\n", e->index, e->n);
		if (e->n >= value)
			return (linearSearchSkip(s, e, value));
	}
	return (linearSearchSkip(s, e, value));
}
/**
 * linearSearchSkip - search for a number in a linear again way
 * @s: the input
 * @e: the size
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
skiplist_t *linearSearchSkip(skiplist_t *s, skiplist_t *e, int value)
{
	printf("Value found between indexes [%li] and [%li]\n",
			s->index, e->index);
	for (; s != e->next;)
	{
		printf("Value checked at index [%li] = [%i]\n",
				s->index, s->n);
		if (s->n == value)
			return (s);
		s = s->next;
	}
	return (NULL);
}
