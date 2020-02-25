#include "holberton.h"
#define NULL 0
/**
 * _strspn - calculates the length of the initial segment.
 * @s: string to be scanned
 * @accept: string containing the characters
 * Return: the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
char *p; /*p = s*/
char *a; /*a = accept*/
int count = 0;

for (p = s; *p != '\0'; ++p)
{
for (a = accept; *a != '\0'; ++a)
{
if (*p == *a)
break;
}
if (*a == '\0')
return (count);
++count;
}

return (count);
}
