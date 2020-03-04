#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates arguments.
 * @ac: argument counter
 * @av: argument vector
 * Return: a pointer to a new string or NULL if it falls.
 */

char *argstostr(int ac, char **av)
{
int i, j, l, _strlen;
char *str;

if (ac == 0)
return (NULL);

if (av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
_strlen++;
}
}

str = malloc((_strlen + ac + 1) * sizeof(char));
if (str == NULL)
return (NULL);

for (i = 0, l = 0; l < _strlen + ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, l++)
{
str[l] = av[i][j];
}
str[l] = '\n';
l++;
}

str[l] = '\0';
return (str);
}
