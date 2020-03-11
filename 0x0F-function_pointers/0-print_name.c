#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name.
 * @name: parameter char type
 * @f: function
 * return: void
 */

void print_name(char *name, void (*f)(char *))
{

if (name == NULL)
return;

if (f == NULL)
return;

f(name);

/*void (*pfn)(char *);
pfn = f;
pfn(name);*/
}
