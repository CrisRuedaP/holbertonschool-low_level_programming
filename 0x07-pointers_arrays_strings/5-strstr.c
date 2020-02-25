#include "holberton.h"
#define NULL 0
/**
 * _strstr - takes two strings as an argument and finds the first occurrence of the substring in the string.
 * @haystack: substring
 * @needle: string
 * Return: a pointer points to the first character of the found else return NULL
 */
char *_strstr(char *haystack, char *needle)
{
char *s1; /*substring*/
char *s2; /*string*/

for (s1 = haystack; *s1 != '\0'; ++s1)
{
for (s2 = needle; *s2 != '\0'; ++s2)
{
if (*s1 == *s2)
return (s1);
}
}
return (NULL);
}
