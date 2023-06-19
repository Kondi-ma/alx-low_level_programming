#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints alphabets without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97 ; n < 123 ; n++)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
