#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function that add positive numbers.
 * @argc: number of arguments.
 * @argv: array of character pointers
 *
 * Return: Error, 0 or 1.
 */

int main(int argc, char *argv[])
{
int i, j, sum = 0;

if (argc < 1)
{
printf("0\n");
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
