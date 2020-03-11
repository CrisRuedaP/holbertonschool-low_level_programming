#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name.
 * @name: parameter char type
 * @f: function
 * return: void
 */

void print_name(char *name, void (*f)(char *))
{
void (*pfn)(char *);
pfn = f;
pfn(name);
}
