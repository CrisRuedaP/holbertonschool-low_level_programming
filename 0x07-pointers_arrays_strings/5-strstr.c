#include "holberton.h"
#define NULL 0
/**
 * _strstr - takes two strings as an argument
 * and finds the first occurrence of the substring in the string.
 * @haystack: string
 * @needle: substring
 * Return: a pointer points to the first
 * character of the found else return NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k;

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0, k = i; needle[j] != '\0'; j++, k++)
{
if (needle[j] != haystack[k] || haystack[k] == '\0')
break;
}
if (needle[j] == '\0')
return (haystack + i);
}
return ('\0');
}
