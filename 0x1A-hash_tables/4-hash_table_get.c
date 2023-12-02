/*
 * File: 4-hash_table_get.c
 * Auth: Sweilam
*/

#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node_to_Get;
unsigned long int index;
 if ( (ht == NULL) || (*key == '\0') || (key == NULL))
    {
        return (NULL);
    }
    index = key_index((const unsigned char *)key, ht->size);
    if(index >= ht->size)
    {
        return (NULL);
    }
    node_to_Get = ht->array[index];
    while((node_to_Get) && (strcmp(node_to_Get->key, key) != 0))
    {
        node_to_Get = node_to_Get->next;
    }
    if (node_to_Get == NULL)
    {
        return (NULL);
    }
    else
    {
        return (node_to_Get->value);
    }

}
