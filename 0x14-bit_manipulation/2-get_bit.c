#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer argument
 * @index: is the index
 * Return: 0 or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{

if (index > sizeof(n) * 8)
return (-1);

if ((n >> index) & 1)
return (1);
else
return (0);

}
