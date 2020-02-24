#include "holberton.h"

/**
 * _memset - fill the memory whit a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: bytes of memory
 * Return: a pointer to the memory.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;

return (s);
}
