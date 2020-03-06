#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - creates an array of integers.
 * @min: integer value
 * @max: integer value
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
int i, value, *pint;

if (min > max)
return (NULL);

value = max - min;
pint = malloc((value + 1) * sizeof(int));
if (pint == NULL)
return (NULL);

for (i = 0; i <= value; i++)
{
pint[i] = min++;
}
pint[i] = '\0';
return (pint);
}
