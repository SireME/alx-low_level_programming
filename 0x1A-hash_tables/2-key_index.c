#include "hash_tables.h"

/**
 * key_index - compute key index
 * @key: key
 * @size: size of array
 *
 * Return: key index
 */



unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djb2;

	/* hash key using djb2 algorithm*/
	djb2 = hash_djb2(key);

	/* return index based on size of array and djb2 algorithm*/
	return (djb2 % size);
}
