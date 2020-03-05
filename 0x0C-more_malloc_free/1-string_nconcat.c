#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - concatenated two strings.
 * @s1: string
 * @s2: string
 * @n: integer
 * Return: point to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, j, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

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
