#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    long unsigned int i;

    ht = hash_table_create(10);
    printf("%p\n", (void *)ht);
    if (ht == NULL)
	    printf("yay size is zero");
    for (i = 0; i < ht->size; i++)/* print empty null coresonding to array size*/
	    printf("NULL ");
    return (EXIT_SUCCESS);
}
