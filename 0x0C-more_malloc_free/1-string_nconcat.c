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

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, j, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = 0;

if (s2 == NULL)
s2 = 0;

while (s1[len1] != '\0')
{
len1++;
}

while (s2[len2] != '\0')
{
len2++;
}

if (n > len2)
n = len2;

str = malloc((n + len1 + 1) * sizeof(char));
if (str == NULL)
return (NULL);

for (i = 0; i < len1; i++)
{
str[i] = s1[i];
}
for (j = 0; j < n; j++, i++)
{
str[i] = s2[j]; 
}
str[i] = '\0';
return (str);
}
