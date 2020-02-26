#include "holberton.h"

/**
 * _strlen_recursion - length of a string.
 * @s: The character to print
 *
 * Return: 0 if is null else 1
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
_putchar(*s);
}
}
