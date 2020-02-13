#include "holberton.h"
/**
 * print_numbers - prints numbers.
 * Return: Always 0.
 */
void print_numbers(void)
{
int x;

for (x = '0'; x <= '9'; x++)
{
_putchar(x);
}
_putchar('\n');
}
