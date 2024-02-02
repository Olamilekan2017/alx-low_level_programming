#include "hash_tables.h"

/**
 * hash_table_print - This function prints hash table
 * @ht: The pointer
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	size_t i;
	unsigned char c_flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (c_flag == 1)
				printf(", ");
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
