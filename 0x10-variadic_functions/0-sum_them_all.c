#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns sum of all its parameters.
 * @n: integer
 *
 * Return: result of sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list arguments;

va_start(arguments, n);

if (n == 0)
return (0);

for (i = 0; i < n; i++)
{
sum += va_arg(arguments, unsigned int);
}
va_end(arguments);
return (sum);
}
