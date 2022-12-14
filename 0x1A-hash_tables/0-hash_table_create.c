#include "hash_tables.h"
/**
 * hash_table_create - function to create hash table
 * @size: size of table
 * Return: pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(table->size * sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);

	for (; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
