#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - ppal function
 * @argc: number of arguments
 * @argv: positions of argumens
 * Return: void
 */
int main(int argc, char *argv[])
{
int a, b, result;
char *operator;
int (*ptr)(int, int);

while (argc != 4)
{
printf("Error\n");
exit(98);
}

if (argv[2][1] != 0)
printf("Error\n");
exit(99);

a = atoi(argv[1]);
b = atoi(argv[3]);
operator = argv[2];
ptr = get_op_func(operator);
result = (*ptr)(a, b);

printf("%d\n", result);
return (0);

}
