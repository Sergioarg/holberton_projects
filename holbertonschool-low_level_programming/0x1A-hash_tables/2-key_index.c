#include "hash_tables.h"
/**
 * key_index - give the index of the key
 *
 * @key: char key of the values
 * @size: size of the array of the hash table
 * Return: ecuation of get the index of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_index;

	hash_index = hash_djb2(key);

	if (size == 0)
		return (0);

	return (hash_index % size);
}
