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

for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar ('\n');
return (0);
}
