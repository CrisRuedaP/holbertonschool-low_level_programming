#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1, on success 0
 * 
 */
void print_alphabet(void)
{
char x;

for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar ('\n');
}
