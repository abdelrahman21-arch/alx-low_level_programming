/*
 * File: 1-swap.c
 * Auth: Sweilam
 */

#include "main.h"

/**
 * swap_int- Swaps two numbers Using pointers
 * @a: The pointer to an int.
 * @b: The pointer to an int.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;



}
