#include "holberton.h"

/**
 * reverse_array - reverse content of an array.
 * @a: array
 * @n: elements
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i, tmp;


i = 0;
n = n - 1;
while (i <= n)
{
tmp = a[i];
a[i] = a[n];
a[n] = tmp;
i++;
n--;
}
}
