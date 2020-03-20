#include <stdio.h>

/**
 * called - prints before the main function is executed.
 */
void called(void)__attribute__((constructor));
void called(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");

}
