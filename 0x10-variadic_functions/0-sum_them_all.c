/*
 * file: 0-sum_them_all.c
 * Author: Sweilam
*/
#include "variadic_functions.h"
/**
 * sum_them_all - sums the parameters given to a function
 * @n: number of parameters passed to the function
 * @...: the number of paramters to find the sum of (variable)
 * Return: Sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
va_list param_list;
unsigned int i;
int  sum = 0;
va_start(param_list, n);
for (i = 0; i < n; i++)
{
sum += va_arg(param_list,  int);
}
va_end(param_list);
return (sum);
}
