/*
 * File: 2-strlen.c
 * Author: Sweilam
 */
#include "main.h"
/**
 * _strlen - Returns length of a string
 * @s: The string that i want to get the legnth of
 * Return: The length of @s.
 */
int _strlen(char *s)
{
int length = 0;
while (*s++)
{
length++;
}
return (length);





}
