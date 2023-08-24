#include <stdio.h>
void m(void) __attribute__ ((constructor));
/**
 * m - prints a sentence
 */
void m(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
