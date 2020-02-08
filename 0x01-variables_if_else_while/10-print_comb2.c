#include <stdio.h>
/**
 * main - Is the principal function
 *
 * Return: Always 0
 */
int main(void)

{
int x;
for (x = 0; x < 100; x++)
{
putchar((x / 10) + '0');
putchar((x % 10) + '0');
if (x != 99)
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
