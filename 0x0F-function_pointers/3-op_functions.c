#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - function that sum of two integers
 * @a: integer
 * @b: integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{

return (a + b);

}

/**
 * op_sub - function that sub of two integers
 * @a: integer
 * @b: integer
 * Return: the diference of a and b
 */
int op_sub(int a, int b)
{

return (a - b);

}

/**
 * op_mul - function that mult of two integers
 * @a: integer
 * @b: integer
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{

return (a * b);

}

/**
 * op_div - function that divide two integers
 * @a: integer
 * @b: integer
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
else
return (a / b);
}

/**
 * op_mod - calculate the module of two integers
 * @a: integer
 * @b: integer
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
else
return (a % b);

}
