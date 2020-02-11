#include "holberton.h"
void print_alphabet(void);
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
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
