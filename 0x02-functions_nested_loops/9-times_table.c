#include "holberton.h"
/**
 * times_table - print table
 *
 * Return: On success return 0
 */
void times_table(void)
{
int m;
int n;
int l;

for (m = 0; m < 10; m++)
{
for (n = 0; n < 10; n++)
{
l = m * n;
if (n == 0)
{
_putchar(l + '0');
}
else if (l < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(l + '0');
}
else if (l >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(l / 10 + '0');
_putchar(l % 10 + '0');
}
}
_putchar('\n');
}
}
