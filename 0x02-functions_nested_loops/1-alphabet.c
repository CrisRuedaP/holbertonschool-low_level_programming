#include "holberton.h"
/**
 * print_alphabet - lowercase
 * Return: On success return 0
 */
void print_alphabet(void)
{
char x;

for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
