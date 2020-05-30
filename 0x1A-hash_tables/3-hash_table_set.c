#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table to add or update the key/value to
 * @key: the key to look for size
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp, *new;
	unsigned long int index;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp->next = temp;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	ht->array[index] = new;
	return (1);
}
