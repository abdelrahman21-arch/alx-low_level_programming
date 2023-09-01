/*
 * file : 0-whatsmyname.c
 * Author: Sweilam
 */

/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: command line arguments count
 * @argv: array of strings of command line arguments
 */
#include <stdio.h>
#include <stdlib.h>

int main( int argc,char **argv)
{
  argc = 0; 
  printf("%s\n",argv[argc]);
  exit(EXIT_SUCCESS);

}
