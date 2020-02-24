#include <stdio.h>

/**
 * main - print to 98
 *
 * Return: 0 always
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
