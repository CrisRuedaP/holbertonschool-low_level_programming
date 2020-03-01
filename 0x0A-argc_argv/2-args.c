#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: number of arguments.
 * @argv: array of character pointers
 *
 * Return: Nothing.
 */

int main(int argc, char *argv[])
{
int i = 0;

while (i != argc)
printf("%s\n", argv[i++]);

return (0);
}
