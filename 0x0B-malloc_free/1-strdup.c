#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - copy of the string given as a parameter.
 * @str: string.
 *
 * Return: a pointer to a newly allocated space in memory.
 */
char *_strdup(char *str)
{
char *str2;
int len = 0;
int i;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; )
{
i++;
}
str2 = malloc((i + 1) * sizeof(char));
if (str2 == NULL)
return (NULL);

while (len < i)
{
str2[len] = str[len];
len++;
}

str2[i] = '\0';
return (str2);
}
