#include "hash_tables.h"

/**
 * hash_table_delete - :x
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node == NULL)
			free(node);
		else
		{
			while (node != NULL) /*free individual arrays*/
			{
				temp = node;
				node = node->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
	}

	free(ht->array); /*free the array pointer itself*/
	free(ht); /*free entire table*/
}
