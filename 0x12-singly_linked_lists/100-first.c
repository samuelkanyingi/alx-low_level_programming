#include <stdio.h>
void printStuff(void) __attribute__((constructor));
/**
 * printStuff- to be exsecuted before main
 */
void printStuff(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

