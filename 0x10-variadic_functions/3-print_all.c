#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - function that prints anything.
 * @format: constant
 *
 * return: void
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *str = 0;

va_start(args, format);
while (format == '\0')
{
printf("\n");
return;
}
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
}
if ((format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's') && format[i + 1] != '\0')
printf(", ");
i++;
}
va_end(args);
printf("\n");
}
