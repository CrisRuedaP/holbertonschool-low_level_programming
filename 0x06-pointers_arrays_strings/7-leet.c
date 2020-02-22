#include "holberton.h"

/**
 * leet - encode a strings into 1337.
 * @s: string
 * Return: string encoded.
 */

char *leet(char *s)
{

int i, j;

char a1[] = "aAeEoOtTlL";
char a2[] = "4433007711";

i = 0;
j = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == a1[j])
s[i] = a2[j];
}
}
return (s);
}

