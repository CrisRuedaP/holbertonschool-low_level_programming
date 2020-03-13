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
result = get_op_func(argv[2])(a, b);

printf("%d\n", result);
return (0);

}
