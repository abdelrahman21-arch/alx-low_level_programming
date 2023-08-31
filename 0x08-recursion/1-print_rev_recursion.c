/*
 * file : 1-print_rev_recursion.c
 * Auth: Sweilam
 */

/**
 * _print_rev_recursion - prints a string in reverse
 * @s : string to be reversed
 */

#include "main.h"

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}



}
