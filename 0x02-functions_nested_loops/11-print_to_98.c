#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @n: integer
 * Return: always 0
 */

void print_to_98(int n)
{
if (n < 98)
{

while (n <= 98)
{
printf("%d", n);
if (n != 98)
printf(", ");
n++;
}
printf("\n");
}

else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
printf(", ");
n--;
}
printf("\n");
}

else
{
printf("%d", n);
printf("\n");
}
}
