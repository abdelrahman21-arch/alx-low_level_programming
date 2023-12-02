/*
* file: 3-hash_table_set.c
* Author: Sweilam
*/

#include "hash_tables.h"

/**
 * hash_table_set - sets hash table with a node
 * @ht: the table
 * @key: they key to be se twith
 * @value: value to be set
 * Return: 0 - On Failure.
 *         1 - On Success.
*/
int hash_table_set (hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node;
    char *value_copy;
    unsigned long int index, i;
    if ( (ht == NULL) || (*key == '\0') || (key == NULL) || (value == NULL))
    {
        return (0);
    }
    value_copy = strdup(value);
    if (value_copy == NULL )
    return (0);
    
    index = key_index((const unsigned char *)key, ht->size);
    for (i = index; ht->array[i]; i++)
    {
        if(strcmp(ht->array[i]->key, key) == 0) /*case of collision*/
        {
            free(ht->array[i]->value);
            ht->array[i]->value = value_copy;
            return (1);


        }
    }
    new_node =(hash_node_t*) malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        free(value_copy);
        return (0);
    }
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
            free(new_node);
            return (0);

    }
    new_node->value = value_copy;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);

   


}
