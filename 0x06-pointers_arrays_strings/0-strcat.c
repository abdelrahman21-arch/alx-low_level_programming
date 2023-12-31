/*
 * file: 0-strcat.c
 * Auth: Sweilam
 */
#include"main.h"

/**
 * _strcat - Concatenates the string pointed to by @src
 *                  ,including terminal null byte,
 *                  to the end of the string pointed to by @dest
 * @dest: A pointer to the string to be concatenated upon
 * @src: Source string for @dest to be appended to
 * Return: A pointer to the @dest string.
 */

char *_strcat(char *dest, char *src)
{
int dest_length = 0;
int index = 0;
while (dest[index++])
{
dest_length++;
}
for (index = 0; src[index]; index++)
{
dest[dest_length++] = src[index];
}
return (dest);
}
