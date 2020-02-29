#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: number of arguments.
 * @argv: array of character pointers
 *
 * Return: Nothing.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
int i = 0;

if (i <= argc)
printf("%d\n", argc - 1);
return (0);
}
