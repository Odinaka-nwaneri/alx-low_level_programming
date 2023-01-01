#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int i;
	int b;

	for (i = '0'; i <= '9'; i++)
	{
		for (b = i + 1; b <= '9'; b++)
		{
			if (i != b)
			{
				putchar(i);
				putchar(b);
				if (i == '8' && b == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
