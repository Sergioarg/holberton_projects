#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hash table to add values
 * @key: add documentation
 * @value: add documentation
 * Return: int
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	/* Get the index segun la key the key */
	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];
	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		{
			free(item->value);
			item->value = strdup(value);
			if (item->value == NULL)
				return (0);
			return (1);
		}
		item = item->next;
	}
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item);
		return (0);
	}
	item->value = strdup(value);
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (0);
	}
	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}
