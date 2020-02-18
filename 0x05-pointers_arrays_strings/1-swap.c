#include "holberton.h"

/**
 * swap_int - swap the value of two integers
 * @a: pointer
 * @b: pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{

int c = *a;

*a = *b;
*b = c;

}
