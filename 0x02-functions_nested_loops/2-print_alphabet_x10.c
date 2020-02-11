#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void);
{
int x;
int y;

for (x = '0'; x <= '9'; x++)
{
for (y = 'a'; y <= 'z'; y++)
_putchar(y);
_putchar ('\n');
}
return (0);
}
