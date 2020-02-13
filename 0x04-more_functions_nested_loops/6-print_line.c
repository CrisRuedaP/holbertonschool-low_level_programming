#include <stdio.h>
/**
 * print_line - draws a straight
 * @n: - variable declaration
 * Return: Always 0
 */
void print_line(int n)
{
int x;

for (x = 1; x >= n; x++)
{
if (n <= 0)
{
_putchar('_');
}
}
_putchar('\n');
}
