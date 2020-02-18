#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: nothing.
 */
void rev_string(char *s)
{
int i, f;
char tmp;

for (i = 0; s[i] != 0; i++)
{
}

f = 0;
i = i - 1;
while (f < i)
{
tmp = s[i];
s[i] = s[f];
s[f] = tmp;
f++;
i--;
}
}
