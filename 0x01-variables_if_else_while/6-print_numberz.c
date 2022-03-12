#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 30; n < 40; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
