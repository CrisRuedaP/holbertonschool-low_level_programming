#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
char x;

for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
_putchar ('\n');
}
}
