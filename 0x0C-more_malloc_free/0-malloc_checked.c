#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - calls exit on failure
 * @b: number of bytes to allocate
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
