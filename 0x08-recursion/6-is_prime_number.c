#include "holberton.h"

/**
 * is_prime_number - returns 1 if the integer is a prime number.
 * @n: integer
 *
 * Return: 1 if is a prime number else 0
 */

int is_prime_number(int n)
{

if (n < 2)
{
return (0);
}

return (find_pn(n, 2));
}

/**
 * find_pn - test a prime number.
 * @n: integer to calculate a prime number
 * @i: integer to determine a prime number
 *
 * Return: 1 if is prime else return 0
 */

int find_pn(int n, int i)
{

if (n == i)
{
return (1);
}

else if (n % i == 0 && n != i)
{
return (0);
}

return (find_pn(n, i + 1));
}
