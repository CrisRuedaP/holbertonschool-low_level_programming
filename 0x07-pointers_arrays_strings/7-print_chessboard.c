#include "holberton.h"

/**
 * print_chessboard - function man
 * @a: array
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
int i, j; /*i = filas; j = columns*/

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
