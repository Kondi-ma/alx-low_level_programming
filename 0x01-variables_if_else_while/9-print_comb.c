#include <stdio.h>

/**
 * main - printing all possible combinations of single digit numbers
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		putchar(m);
		if (m != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
