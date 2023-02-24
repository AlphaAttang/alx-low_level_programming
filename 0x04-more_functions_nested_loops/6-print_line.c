#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('\n');
	}

	_putchar('\n');
}
