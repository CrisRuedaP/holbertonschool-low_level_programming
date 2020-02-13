#include "holberton.h"
/**
 * print_most_numbers - Print numbers .
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int x;

for (x = '0'; x <= '9'; x++)
if (x != '2' && x != '4')
{
_putchar(x);
}
_putchar ('\n');
}
