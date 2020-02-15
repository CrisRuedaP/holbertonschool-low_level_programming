#include "holberton.h"
/**
 * print_triangle - draw a triangle
 * @size: - variable declaration
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
int f;
int s;
int n;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (f = 1; f <= size; f++)
{
for (s = 1; s <= (size - f); s++)
{
_putchar(' ');
}
for (n = 1; n <= f; n++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
