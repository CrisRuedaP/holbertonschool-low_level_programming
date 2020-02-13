#include "holberton.h"
/**
 * more_numbers - print 10 lines
 * Return: On success return 0
 */
void more_numbers(void)
{
int li = 0;
int n;

while (li < 10)
{

n = 0;
while (n <= 14)
{
if(n > 9)
{
_putchar(n / 10);
}  
_putchar(n % 10);
n++;
}

_putchar('\n');
li++;

}
}
