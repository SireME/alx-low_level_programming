#include "hash_tables.h"

/**
 * hash_table_get - retrieve value at index
 * @ht: hash table
 * @key: key
 *
 * Return: string value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	const hash_table_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht;
	if (temp->array[index] != NULL)
	{
		while (temp->array[index] != NULL)
		{
			if (strcmp(temp->array[index]->key, key) == 0)
				return (temp->array[index]->value);
			temp->array[index] = temp->array[index]->next;
		}
	}

	return (NULL);
}
