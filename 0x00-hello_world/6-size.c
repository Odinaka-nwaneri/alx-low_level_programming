#include <stdio.h>

/**
 * main - Entry point
 * return: Always 0 (success)
 */

int main(void)
{
	int i;
	char a;
	long int e;
	long long int f;
	float g;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsignedlong)sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("sizeof a float: %lu byte(s)\n", (unsigned long)sizeof(g));
	return (0);
}
