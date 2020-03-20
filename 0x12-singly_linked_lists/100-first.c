#include "lists.h"

/**
 * called - prints before the main function is executed.
 */
void called(void)__attribute__((constructor));
void called(void)
{
printf("You're beat! and yet, you must allow,
\nI bore my house upon my back!\n");

}
