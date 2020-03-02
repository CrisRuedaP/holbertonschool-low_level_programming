#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins >
 * to make change for an amount of money.
 *
 * @argc: number of arguments.
 * @argv: array of character pointers
 *
 * Return: values 25, 10, 5, 2, and 1 cent or 0.
 */

int main(int argc, char *argv[])
{
int amount, cents = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

amount = atoi(argv[1]);
while (amount >= 25)
amount -= 25, cents++;

while (amount >= 10)
amount -= 10, cents++;

while (amount >= 5)
amount -= 5, cents++;

while (amount >= 2)
amount -= 2, cents++;

while (amount >= 1)
amount --, cents++;

printf("%d\n", cents);
return (0);
}
