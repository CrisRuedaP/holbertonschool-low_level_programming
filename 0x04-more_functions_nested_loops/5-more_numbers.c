#include "holberton.h"
/**
 * more_numbers - print 10 lines
 * Return: On success return 0
 */
void more_numbers(void)
{
int li = 0;
int n;

while (li <= 9)
{
li++;

for (n = 0; n <= 14; n++)
{
if (n >= 10)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
