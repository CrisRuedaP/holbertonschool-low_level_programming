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
if (x != 'q' && x != 'e')
{
putchar(x);
}
putchar ('\n');
return (0);
}
