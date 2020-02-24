#include "holberton.h"

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
return ('\0');
}
