/*
 * File: 3-puts.c
 * Auth: Sweilam
 */

#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @c: The string to be printed.
 */
void _puts(char *c)
{
while (*c)
_putchar(*c);
_putchar('\n');
}
