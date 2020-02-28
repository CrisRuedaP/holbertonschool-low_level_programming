#include "holberton.h"

/**
 * _strlen - return the length of a string
 * @s: string
 * Return: result.
 */
int _strlen(char *s)
{

if (*s == '\0')
{
return (0);
}
s++;
return (1 + _strlen(s));
}


/**
 * is_palindrome - returns 1 if a string is palindrome.
 * @s: char
 *
 * Return: 1 if a string is palindrome else 0.
 */

int is_palindrome(char *s)
{
int count;

count = _strlen(s);
return (cmp_str(s, count));
}

/**
 * cmp_str - determinate if a string is palindrome 
 * @s: string
 * @s2: string
 *
 * Return: 1 if a string is palindrome or 0 if not.
 */

int cmp_str(char *s, char *s2)
{
if (*s != *s2)
{
return (0);
}

else if (*s == *s2 && *(s + 1) != '\0') 
{
return (1);
}

else
{
return (cmp_str(s + 1, s2 - 1));
}
}
