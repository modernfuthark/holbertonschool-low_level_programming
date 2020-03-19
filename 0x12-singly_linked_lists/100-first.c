#include <stdio.h>
void tortoise(void) __attribute__((constructor));
/**
 * tortoise - Print before the main!
 * Return: Nothing, function is void
 */

void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
