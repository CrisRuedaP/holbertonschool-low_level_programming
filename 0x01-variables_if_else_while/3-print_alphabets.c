#include <stdio.h>
/**
 * main - Is the principal function
 *
 * Return: Always 0
 */
int main(void)

{
int x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
}
for (x = 'A'; x <= 'Z'; x++)
{
putchar (x);
}
putchar ('\n');
return (0);
}
