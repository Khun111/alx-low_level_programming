#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node_collide;
	char *dup_value;
	unsigned long int hash_index, i;

	if (!ht || !value || !key || key = "")
		return (0);
	dup_value = strdup(value);
	if (!value)
		return (0);
	hash_index = key_index((const unsigned char *)key, ht->size)
	
	for (i = hash_index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
			free(ht->array[i]->value);
		ht->array[i]->value = dup_value;
		return (1);
	}

	node_collide = malloc(sizeof(hash_node_t *));
	if (!node_collide)
	{
		free(dup_value);
		return (0);
	}
	node_collide->key = strdup(key);
	if (!node_collide->key)
	{
		free(node_collide);
		return (0);
	}
	node_collide->value = dup_value;
	node_collide->next = ht->array[hash_index];
	ht->array[hash_index] = node_collide;
	return (1);
}
