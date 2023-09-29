/*
 * file : 0-binary_to_uint.c
 * Auth: Sweilam
*/
#include "main.h"
typedef unsigned int uint;
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: the binary number as a string
 *
 * Return: the decimal as uint
*/
unsigned int binary_to_uint(const char *b)
{
	uint num = 0;
	if (!b)
	return (0);
	while (*b)
	{
	if (*b != '0' && *b != '1')
	return (0);
	num = num * 2 + (*b++ - '0');
	}

return (num);
}
