#include "holberton.h"

/**
 * _strncat - concatenated two strings.
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;


i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\0')
{
dest[i++] = src[j++];
}

dest[i] = '\0';
return (dest);
}
