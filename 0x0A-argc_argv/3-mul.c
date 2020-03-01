#include <stdio.h>
#include<stdlib.h>
/**
 * main - function that multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array of character pointers
 *
 * Return: 0 or 1 if does not receive two arguments.
 */

int main(int argc, char *argv[])
{
int mul = 0;

if (argc != 3)
{
printf("Error\n");
return (1);
}

mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
return (0);
}
