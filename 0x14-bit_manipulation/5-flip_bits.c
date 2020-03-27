#include <stdio.h>
#include "holberton.h"
/**
 * countSetBits - Function that count set bits
 * @n: integer argument
 *
 * Return: number of bits to be flipped
 */
unsigned int countSetBits(unsigned long int n)
{
unsigned int count = 0;
while (n)
{
count += (n & 1);
n >>= 1;
}
return (count);
}

/**
 * flip_bits - Function that return count of flipped number
 * @n: integer argument
 * @m: to convert n into m
 * Return: count of set bits in n XOR m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

return (countSetBits(n ^ m));

/*XOR of two number will have set bits only at those places*/
/*where n differs from m.*/
}
