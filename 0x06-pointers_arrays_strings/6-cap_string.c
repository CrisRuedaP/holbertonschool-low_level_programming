#include "holberton.h"

/**
 * cap_string - capitalizes all word of a strings.
 * @s: string
 * Return: string modificated.
 */

char *cap_string(char *s)
{
int i = 0;

if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;

while (s[i])
{
if ((s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
|| s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
|| s[i - 1] == '}') && (s[i] >= 'a' && s[i] <= 'z'))
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
