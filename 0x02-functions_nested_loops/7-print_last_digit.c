#include "holberton.h"
/**
 * print_last_digit - last digit of a number.
 * @n: - variable declaration
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int m = (n % 10);
int p = (m * -1);

if (n > 0)
{
_putchar('0' + m);
return (m);
}
else if (n == 0)
{
_putchar('0' + n);
return (n);
}
else
{
_putchar('0' + p);
return (p);
}
}
