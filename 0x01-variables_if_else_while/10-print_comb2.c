#include <stdio.h>
/**
 * main - Is the principal function
 *
 * Return: Always 0
 */
int main(void)

{
int x;
int y;
for (x = 48; x < 58; x++)
{
for (y = 48; y < 58; y++)
{
putchar(x);
putchar(y);
if (!(x == 57 && y == 57))
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
