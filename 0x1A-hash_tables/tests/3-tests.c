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

	nvalue = malloc(sizeof(char) * (strlen(value) +1));
	if (nvalue == NULL)
		return (0);

	strcpy(nvalue, value);
	newnode = create_node(key, nvalue);
	index = key_index(key, ht->size); /*compute index from size and key using func*/

	/* add element to hash table */

	if (ht->array[index] == NULL) /* update value at computed index if index empty*/
		ht->array[index] = newnode;
	else if (ht->array[index] != NULL) /*if index not empty, resolve collision by adding to list*/
	{
		temp = ht->array[index];
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
		return (NULL);

	node->key = malloc(sizeof(char) * (strlen(key) + 1));/*memory for key*/
	if (node->key == NULL)
		return (NULL);

	strcpy(node->key, key); /*populate key value*/
	node->value = malloc(sizeof(char) * (strlen(value) + 1));/*memory for value*/
	if (node->value == NULL)
		return (NULL);

	strcpy(node->value, value); /*populate value value*/

	node->next = NULL; /*set the pointer of next node to NULL*/
	return (node);
}
int main()
{
	hash_node_t *h1;
	hash_table_t *ht;
	int i;

	h1 = create_node("mbang", "16");
	printf("key :%s value: %s \n", h1->key, h1->value);
	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "mbang", "ernest");
	hash_table_set(ht, "love", "you");
	hash_table_set(ht, "mbang", "holaho");
	hash_table_set(ht, "hetairas", "hetaras, i dono");
	hash_table_set(ht, "mentioner", "mentioner, who knows");
	for (i = 0; i < 1024; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("key: %s value: %s", ht->array[i]->key, ht->array[i]->value);
			printf("\n index:  %d \n", i);
		}
		if (ht->array[i] != NULL && ht->array[i]->next != NULL)
		{
			printf("key: %s value: %s", ht->array[i]->next->key, ht->array[i]->next->value);
                        printf("\n index:  %d + first value\n", i);
		}
	}


	return 1;

}

