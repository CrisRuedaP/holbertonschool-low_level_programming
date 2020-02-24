#include "holberton.h"
#define NULL 0

/**
 * _strchr - locate a character in a string.
 * @s: string
 * @c: character
 * Return: a pointer or NULL.
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
else
return (NULL);
}
