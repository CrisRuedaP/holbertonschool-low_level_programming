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

if (argc == 4)
{
printf("%d\n", get_op_func(argv[2])(atoi(argv[1]),atoi(argv[3])));
return (0);
}
printf("Error\n");
exit(98);
}
