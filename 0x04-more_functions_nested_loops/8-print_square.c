#include "holberton.h"
/**
 * print_line - draws a straight
 * @n: - variable declaration
 *
 * Return: Always 0
 */
void print_square(int size)
{
int c;
int k;

for (c = 0; c < size; c++)
{
for (k = 0; k < size; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
