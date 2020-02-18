#include "holberton.h"

/**
 * print_rev - Print a string in reverse
 * @s: string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i;

while (s[i] != '\0')
{
i++;
}
for (i = i - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
