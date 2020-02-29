#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: number of arguments.
 * @argv: array of character pointers
 *
 * Return: Nothing.
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
