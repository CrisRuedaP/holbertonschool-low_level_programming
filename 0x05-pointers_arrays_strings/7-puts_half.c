#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: nothing.
 */

void puts_half(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
}

if (i % 2 == 0)
{
i = (i - (i / 2));

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

else
{
i = i - ((i - 1) / 2);

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}

_putchar('\n');
}
}
