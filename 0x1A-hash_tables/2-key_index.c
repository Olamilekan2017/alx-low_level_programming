#include "hash_tables.h"

/**
 * key_index - This function gets the index
 * @key: The key to get the index
 * @size: The size of the array
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
