#include <stdio.h>

/**
 * main - print lowercae alphabet in reverse
 * Return: Always 0
 */

int main(void)
{

	char rletters;

	for (rletters = 'z'; rletters >= 'a'; rletters--)
	{
		putchar(rletters);
	}

	putchar('\n');
	return (0);
}
