#include "holberton.h"
/**
 * _abs - absolute value.
 * @n: - variable declaration
 * Return: Always 0.
 */
int _abs(int n)
{
int v = n * -1;

if (n < 0)
{
return (v);
}
else
{
return (n);
}
}
