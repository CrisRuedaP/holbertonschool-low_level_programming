#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars.
 * @size: size of array.
 * @c: array of characters
 *
 * Return: a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;

if (size == 0)
return (NULL);


s = malloc((size) * sizeof(char));
if (s == NULL)
return (NULL);

i = 0;
while (i < size)
{
s[i] = c;
i++;
}

s[i] = '\0';
return (s);
}
