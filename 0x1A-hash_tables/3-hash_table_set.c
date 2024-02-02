#include "hash_tables.h"

/**
 * hash_table_set- This function add an element in hash table
 * @ht: The pointer
 * @key: The key
 * @value: The value
 * Return: int
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *vlc;
	size_t index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	vlc = strdup(value);
	if (vlc == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = vlc;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(vlc);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = vlc;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
