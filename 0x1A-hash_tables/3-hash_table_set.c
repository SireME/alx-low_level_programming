#include "hash_tables.h"
/**
 * hash_table_set - set node at specific index
 * @ht: hash table
 * @key: array key
 * @value: array value
 *
 * Return: 0 or 1 exit status
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode, *temp;
	int index;
	char *nvalue;
	const unsigned char *tempkey = (const unsigned char *) key;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	nvalue = strdup(value);
	if (nvalue == NULL)
	{
		free(nvalue);
		return (0);
	}

	newnode = create_node(key, nvalue);
	if (newnode == NULL)
	{
		free(nvalue);
		return (0);
	}

	/*compute index from size and key using func*/
	index = key_index(tempkey, ht->size);

	/* add element to hash table */
	/* update value at computed index if index empty*/
	if (ht->array[index] == NULL)
		ht->array[index] = newnode;
	/*if index not empty, resolve collision by adding to list*/
	else if (ht->array[index] != NULL)
	{
		temp = ht->array[index];
		while (temp->next != NULL )
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				strcpy(temp->value, value);
			}
			temp= temp->next;
		}
		ht->array[index] = newnode;
		newnode->next = temp;
	}

	return (1);
}

/**
 * create_node - create and populate node with key value and pointer
 * @key: key of node
 * @value: value of node
 *
 * Return: populated node or NULL if failure
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));/*allocate memory for node*/
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->key = malloc(sizeof(char) * (strlen(key) + 1));/*memory for key*/
	if (node->key == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	strcpy(node->key, key); /*populate key value*/
	node->value = malloc(sizeof(char) * (strlen(value) + 1));/*memory for value*/
	if (node->value == NULL)
	{
		free(node->value);
		free(node);
		return (NULL);
	}

	strcpy(node->value, value); /*populate value value*/

	node->next = NULL; /*set the pointer of next node to NULL*/
	return (node);
}
