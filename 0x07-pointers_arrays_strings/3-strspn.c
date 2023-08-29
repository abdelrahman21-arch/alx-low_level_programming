/*
 * File: 3-strspn.c
 * Auth: Sweilam
 */

#include "main.h"
/**
 * _strspn - Returns the number of bytes
 * @s: string to be searched
 * @accept: prefix to be measured
 * Return: num of bytes in s from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
bytes++;
break;
}
else if (accept[index + 1] == '\0')
{
return (bytes);
}

}
s++;
}
return (bytes);
}
