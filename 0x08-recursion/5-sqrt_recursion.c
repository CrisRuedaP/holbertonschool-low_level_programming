#include "holberton.h"

/**
 * find_sqrt - program to find floor
 * @x: number
 * @y: number
 *
 * Return: always 0
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
return (find_sq (x, y + 1));
}

/**
 * _sqrt_recursion - square root of a number.
 * @n: number
 *
 * Return: always 0
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
