#include "holberton.h"
#include<stdio.h>
/**
 * print_binary - prints the binary representation of a number.
 * @n: integer argument
 *
 * Return: the converted number.
 */
void print_binary(unsigned long int n)
{
unsigned long int i = 1;

if (n > 1)
{
print_binary(n >> 1);
}

if ((n & i) == 1)
_putchar('1');

if ((n & i) == 0)
_putchar('0');
}
