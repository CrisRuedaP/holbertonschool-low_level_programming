#include "holberton.h"
#include <stdio.h>
/**
 * set_bit - returns the value of a bit to 1 at a given index.
 * @n: integer argument
 * @index: is the index
 * Return: 1 or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{

if (index > sizeof(*n) * 8)
return (-1);

*n = *n | 1 << index;
/*if ((*n >> index) | 1)*/
return (1);
}

