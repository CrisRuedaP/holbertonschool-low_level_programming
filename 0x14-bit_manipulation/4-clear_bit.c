#include <stdio.h>
#include "holberton.h"
/**
 * clear_bit - converts a binary number to an unsigned int
 * @n: integer argument
 * @index: is the index
 * Return: 1 or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(*n) * 8)
return (-1);

/*that if N-th bit is 1, then clear it to 0 ->*/
/*and if it is 0 then leave it unchanged.*/
/*(&) use to clear a bit of integral data type.*/
/*first, need to invert the string of bits with (~)*/
*n = (*n & (~(1 << index)));
return (1);
}
