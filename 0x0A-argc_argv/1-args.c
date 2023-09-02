/*
 * file : 0-whatsmyname.c
 * Author: Sweilam
 */

/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: command line arguments count
 * @argv: array of strings of command line arguments
 * Return: 0 on success
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc,  char __attribute__((__unused__))  **argv)
{
printf("%d\n", argc - 1);
exit(EXIT_SUCCESS);
}
