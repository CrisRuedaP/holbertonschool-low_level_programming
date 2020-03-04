#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: a pointer to a newly allocated space in memory.
 */
char *str_concat(char *s1, char *s2)
{
int i, j, size1 = 0, size2 = 0;
char *s3;

if (s1 == 0)
s1 = "";

if (s2 == 0)
s2 = "";

while (s1[size1])
{
size1++;
}

while (s2[size2])
{
size2++;
}

s3 = malloc((size1 + size2 + 1) * sizeof(char));
if (s3 == NULL)
return (NULL);

for (i = 0; i < size1; i++)
s3[i] = s1[i];

for (j = 0; j < size2; j++, i++)
s3[i] = s2[j];


s3[i] = '\0';

return (s3);
}
