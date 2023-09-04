/*
 * file : 0-whatsmyname.c
 * Author: Sweilam
 */

/**
 * main -  program entry point
 * @argc: command line arguments count
 * @argv: array of strings of command line arguments
 * Return: 0 on success
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[] )
{
int x, y, prod;
if(argc != 3 )
{
exit (EXIT_FAILURE);
}
x = atoi (argv[1] );
y = atoi (argv[2] );
prod = x * y;
printf ("%d\n", prod);
exit (EXIT_SUCCESS);
}
