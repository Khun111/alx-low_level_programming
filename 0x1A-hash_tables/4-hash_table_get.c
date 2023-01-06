#include "hash_tables.h"

/**
 * hash_table_get - function to retreive value
 * @ht: table
 * @key: key to retreive value from
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_index;
	hash_node_t *node;

	if (!ht || !key || *key == '\0')
		return (NULL);
	hash_index = key_index((const unsigned char *) key, ht->size);

	node = ht->array[hash_index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
