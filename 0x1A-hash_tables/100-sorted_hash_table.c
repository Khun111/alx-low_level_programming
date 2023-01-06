#include "hash_tables.h"
/**
 * hash_table_create - function to create hash table
 * @size: size of table
 * Return: pointer to table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(table->size * sizeof(shash_node_t *));
	if (!table->array)
		return (NULL);

	for (; i < table->size; i++)
		table->array[i] = NULL;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * hash_table_set - function to set/update value
 * @ht: table
 * @key: key used to update value
 * @value: value to ve updated
 * Return: 1/0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
        shash_node_t *node_collide, *trav;
        char *dup_value;
        unsigned long int hash_index, i;

        if (!ht || !key || *key == '\0' || !value)
                return (0);
        dup_value = strdup(value);
        if (!value)
                return (0);
        hash_index = key_index((const unsigned char *)key, ht->size);

        for (i = hash_index; ht->array[i]; i++)
        {
                if (strcmp(ht->array[i]->key, key) == 0)
                {

                        free(ht->array[i]->value);
                        ht->array[i]->value = dup_value;
                        return (1);
                }
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
		if (!ht->shead)
		{
			node_collide->sprev = NULL;
			node_collide->snext = NULL;
			ht->shead = node_collide;
			ht->stail = node_collide;
		}
		else if (strcmp(node_collide->key, key) > 0)
		{
			node_collide->sprev = NULL;
			node_collide->snext = ht->shead;
			ht->shead->sprev = node_collide;
			ht->shead = node_collide;
		}
		else
		{
			trav = ht->shead;
			while (trav && (strcmp(node_collide->key, key) < 0))
				trav = trav->snext;
			node_collide->sprev = trav;
			node_collide->snext = trav->snext;
			if (!trav->snext)
				ht->stail = node_collide;
			else
				trav->snext->sprev = node_collide;
			trav->snext = node_collide;
		}
        return (1);
}

/**
 * hash_table_get - function to retreive value
 * @ht: table
 * @key: key to retreive value from
 * Return: value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
        unsigned long int hash_index;
        shash_node_t *node;

        if (!ht || !key || *key == '\0')
                return (NULL);
        hash_index = key_index((const unsigned char *) key, ht->size);
        if (hash_index >= ht->size)
                return (NULL);

        node = ht->shead;
        while (node)
        {
                if (strcmp(node->key, key) == 0)
                        return (node->value);
                node = node->snext;
        }
        return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	
	if (!ht)
		return;
	
	node = ht->shead;
	printf("{");

	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node)
			printf(", ");
	}
	printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
        shash_node_t *node;

        if (!ht)
                return;

        node = ht->stail;
        printf("{");

        while (node)
        {
                printf("'%s': '%s'", node->key, node->value);
                node = node->sprev;
                if (node)
                        printf(", ");
        }
        printf("}\n");
}

/**                                              * hash_table_delete - function to delete table
 * @ht: table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}
