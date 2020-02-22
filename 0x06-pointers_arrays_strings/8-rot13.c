#include "holberton.h"

/**
 * *rot13 - encode a string using rot13.
 * @s: string
 * Return: string encoded.
 */

char *rot13(char *s)
{
int i, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char r[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == a[j])
{
s[i] = r[j];
break;
}
}
}
return (s);
}
