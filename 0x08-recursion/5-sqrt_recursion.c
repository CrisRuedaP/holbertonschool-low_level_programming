#include "holberton.h"

/**
 * find_sq - function to find square root
 * @x: number to return
 * @y: base number
 *
 * Return: square root or 1 if not found square root.
 */

int find_sq(int x, int y)
{

if (x == (y * y))
{
return (y);
}

if (x < (y * y))
{
return (-1);
}
return (find_sq(x, y + 1));
}

/**
 * _sqrt_recursion - square root of a number.
 * @n: given number
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{

if (n == 0)
{
return (0);
}

else if (n < 0)
{
return (-1);
}

else
{
return (find_sq(n, 1));
}
}
