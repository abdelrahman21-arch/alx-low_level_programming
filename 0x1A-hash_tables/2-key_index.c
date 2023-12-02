/*
 * file: 2-key_index.c
 * Author: sweilam
*/

#include "hash_tables.h"
/**
 * key_index - returns the index of the element,
 *                                              corresponding to the key
 * @key: key passed
 * @size: size of the table
 * Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int index = hash_djb2(key) % size ;
    return (index);

}
