#include "holberton.h"

/**
 * find_sqrt - program to find floor
 * @n: number
 * @nb: base number
 *
 * Return: always 0
 */

int find_sqrt(int n, int nb)
{

if (n * n == nb)
return (n);

if (n * n > nb)
{
return (-1);
}
return (find_sqrt(i + 1, nb));


#include "holberton.h"

/**
 * _sqrt_recursion - square root of a number.
 * @n: number
 *
 * Return: always 0
 */

int _sqrt_recursion(int n)
{

if (n < 0)
{
return (-1);
}
if (n == 0)
}
return (0);
{
return (find_sqrt(2, n, n));
}
}
