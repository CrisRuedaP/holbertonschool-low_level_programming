#include "holberton.h"

/**
 * _strlen - return the length of a string
 * @s: string
 * Return: result.
 */
int _strlen(char *s)
{

int accum = 0;

while (s[accum] != '\0')

accum++;

return (accum);

}
