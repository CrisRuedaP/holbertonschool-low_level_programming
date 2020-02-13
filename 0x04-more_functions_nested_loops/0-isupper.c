#include "holberton.h"
/**
 * _isupper - checks for lowercase.
 * @c: - variable declaration
 * Return: Always 0.
 */
int _isupper(int c)
{
if ((c >= 65) && (c <= 90))
{
return (1);
}
else
{
return (0);
}
}
