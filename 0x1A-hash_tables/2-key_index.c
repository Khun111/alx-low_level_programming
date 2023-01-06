#include "hash_tables.h"

/**
 * key_index - function to get hash_index
 * @key: key used to get index
 * @size: table size
 * Return: hash_index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
