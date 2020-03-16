#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * *get_op_func - function return a pointer to the operator given
 * @s: char
 * Return: NULL
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (ops[i].op)
{
if (strcmp(ops[i].op, s))
i++;

else
return (ops[i].f);
}

printf("Error\n");
exit(99);
}
