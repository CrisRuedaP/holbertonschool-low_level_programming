#include "holberton.h"
#define NULL 0
/**
 * _strpbrk - Finds the first character in the string that matches.
 * @s: string to be scanned
 * @accept: string containing the characters
 * Return: a pointer if it matches, else return NULL
 */

char *_strpbrk(char *s, char *accept)
{
char *s1, *s2;

for (s1 = s; *s1 != '\0'; ++s1)
{
for (s2 = accept; *s2 != '\0'; ++s2)
{
if (*s1 == *s2)
return (s1);
}
}
return (NULL);
}
