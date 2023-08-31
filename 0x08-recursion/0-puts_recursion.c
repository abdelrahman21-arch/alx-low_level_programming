/*
 * file: 0-puts_recursion.c
 * Auth: Sweilam
 */
#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to the string
 */

void _puts_recursion(char *s)
{
if (*s && *s != '\0')
{
_putchar (*s);
_puts_recursion(s + 1);
}
_putchar ('\n');


}
