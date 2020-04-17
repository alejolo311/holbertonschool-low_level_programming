 #include "search_algos.h"
/**
 * jump_list - search for a number in a jump again way
 * @list: the input
 * @size: the size
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int s, e, st;
	listint_t *actual, *p;

	if (list == NULL)
		return (NULL);
	s = 0;
	e = size - 1;
	st = sqrt(size);
	actual = list;
	while (s < e)
	{
		s += st;
		p = actual;
		while (actual->next && (s != (int)actual->index))
			actual = actual->next;
		printf("Value checked at index [%li] = [%i]\n", actual->index, actual->n);
		if (actual->n >= value)
			return (linearSearch(p, actual, value));
	}
	return (linearSearch(p, actual, value));
}
/**
 * linearSearch - search for a number in a linearSearch way
 * @s: the input
 * @e: the begining
 * @value: the value to seaach
 * Return: the index of the value, or -1 when the values is not present
 */
listint_t *linearSearch(listint_t *s, listint_t *e, int value)
{
	printf("Value found between indexes [%li] and [%li]\n",
			s->index, e->index);
	while (s != e->next)
	{
		printf("Value checked at index [%li] = [%i]\n",
				s->index, s->n);
		if (s->n == value)
			return (s);
		s = s->next;
	}
	return (NULL);
}
