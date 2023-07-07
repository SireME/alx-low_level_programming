#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of hash table to create
 *
 * Return: pointer to hash table or NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	/*dynamically allocate memory for our table*/
	table = malloc(sizeof(table));
	if (table == NULL) /*instance where malloc failed*/
		return (NULL);

	/*set the size of our table*/
	table->size = size;

	/*determine size of our array*/
	table->array = malloc(sizeof(table->array) * table->size);
	if (table->array == NULL) /* instance where malloc failed*/
		return (NULL);

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
