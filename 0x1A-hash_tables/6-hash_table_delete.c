#include "hash_tables.h"

/**
 * hash_table_delete - function to delete table
 * @ht: table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *trav;
	unsigned long int i = 0;

	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			trav = node;
			node = node->next;
			free(trav->value);
			free(trav->key);
			free(trav);
		}
	}
	free(ht->array);
	free(ht);
}
