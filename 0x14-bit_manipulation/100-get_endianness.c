#include "holberton.h"
/**
 * get_endianness - checks the endianness, describes the order in which a
 * sequence of bytes are stored in computer memory. Can be either big or small.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
char number;
char *ptr;

number = '1';
ptr = &number;
if (*ptr == 0)
return (0);
else
return (1);
}
