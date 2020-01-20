#include "hash_tables.h"
/**
 * shash_table_create - create order table
 * @size: size
 * Return: the head
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashTable;

	if (size == 0)
		return (NULL);
	hashTable = calloc(1, sizeof(shash_table_t));
	if (hashTable == NULL)
		return (NULL);
	hashTable->size = size;
	hashTable->array = calloc(size, (sizeof(shash_node_t **)));
	if (hashTable->array == NULL)
		return (NULL);
	hashTable->shead = NULL;
	hashTable->stail = NULL;
	return (hashTable);
}

/**
 * shash_table_set - set a key an a value
 * @ht: hash
 * @key: key
 * @value: input
 * Return: 1 in succes
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *element, *actual;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	actual = ht->array[index];
	while (actual != NULL)
	{
		if (strcmp(actual->key, key) == 0)
		{	free(actual->value), actual->value = strdup(value);
			if (actual->value == NULL)
				exit(1);
			return (1);
		} actual = actual->next;
	}
	index = key_index((const unsigned char *)key, ht->size);
	element = malloc(sizeof(shash_node_t));
	if (element == NULL)
		exit(1);
	element->key = strdup(key);
	if (element->key == NULL)
		exit(1);
	element->value = strdup(value);
	if (element->value == NULL)
		exit(1);
	element->next = ht->array[index], element->sprev = NULL;
	element->snext = NULL, ht->array[index] = element;
	if (ht->shead == NULL)
	{
		ht->shead = element, ht->stail = element;
		return (1);
	}
	insert(ht, element);
	return (1);
}
/**
 * insert - insert a node
 * @ht: hash
 * @element: node
 */
void insert(shash_table_t *ht, shash_node_t *element)
{
	shash_node_t *actual, *prev;

	if (strcmp(ht->shead->key, element->key) > 0)
	{
		element->snext = ht->shead;
		ht->shead->sprev = element;
		ht->shead = element;
	}
	else
	{
		actual = ht->shead;
		while (actual != NULL)
		{
			prev = actual->sprev;
			if (strcmp(actual->key, element->key) > 0)
			{
				prev->snext = element;
				actual->sprev = element;
				element->snext = actual;
				element->sprev = prev;
				return;
			}
			prev = actual;
			actual = actual->snext;
		}
		prev->snext = element;
		element->sprev = prev;
		ht->stail = element;
	}
}
/**
 * shash_table_get - get
 * @ht: hash table
 * @key:  key
 * Return: value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *actual = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	actual = ht->array[index];
	while (actual != NULL)
	{
		if (strcmp(actual->key, key) == 0)
			return (actual->value);
		actual = actual->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print
 * @ht: hash table
 * Return: Void no return
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *init;
	int flag = 1;

	if (ht == NULL)
		return;
	init = ht->shead;
	putchar('{');
	while (init != NULL)
	{
		if (flag == 0)
			printf(", ");
		printf("'%s': '%s'", init->key, init->value);
		flag = 0;
		init = init->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print in rev
 * @ht: hash table
 * Return: Void no return
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *init;
	int flag = 1;

	if (ht == NULL)
		return;
	init = ht->stail;
	putchar('{');
	while (init != NULL)
	{
		if (flag == 0)
			printf(", ");
		printf("'%s': '%s'", init->key, init->value);
		flag = 0;
		init = init->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - DELETE
 * @ht: hash table
 * Return: Void no return
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *actual, *aux;
	unsigned int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			actual = ht->array[i];
			while (actual != NULL)
			{
				aux = actual;
				free(actual->key);
				if (actual->value)
					free(actual->value);
				actual = actual->next;
				free(aux);
			}
		}
	}
	free(ht->array);
	free(ht);
}
