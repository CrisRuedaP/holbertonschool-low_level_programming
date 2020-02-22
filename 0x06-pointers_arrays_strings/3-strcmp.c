#include "holberton.h"

/**
 * _strncat - compares two strings.
 * @s1: variable
 * @s2: variable
 * Return: resulting string dest.
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i])
{

if (s1[i] > s2[i])
{
return (s1[i] - s2[i]);
}

else if (s1[i] < s2[i])
{
return (s1[i] - s2[i]);
}

else
{
return (0);
}

i++;
}
return (0);
}
