#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - function that prints numbers.
 * @separator: pointer
 * @n: integer
 * return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *str;

if (separator == NULL)
printf("\n");

va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)\n");
}
else
printf("%s", str);

if (separator != NULL)
{
if (i < (n - 1))      
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}