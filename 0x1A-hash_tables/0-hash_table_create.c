/*
 * File: 0-hash_table_create.c
 * Auth: Sweilam
*/

#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table
 * @size: size of table
 * Return: pointer to table
 */


hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i;
    hash_table_t *p = malloc(sizeof(hash_table_t));
     
     if(p == NULL)
     {
        printf("Memory allocation failed");
       return (NULL);
     }
    p->size = size;
    p->array = malloc(sizeof(hash_node_t*) * size);
    if(p->array == NULL)
     {
       printf("Memory allocation failed");
       return (NULL);
     }

    for ( i =0 ; i <size; i++)
    {
        p->array[i] = (NULL);
    }
    return (p);
}
