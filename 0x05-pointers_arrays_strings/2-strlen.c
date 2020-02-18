#include "holberton.h"

/**
 * strlen - return the length of a string
 * @s: string
 * Return: result.
 */
int _strlen(char *s)
{

int accum = 0;

while (s[accum] != '\0') /*mientras no sea el fin del string*/

accum++;

return (accum);

}
