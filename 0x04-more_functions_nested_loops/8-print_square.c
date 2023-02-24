#include "main.h"

/**
 * print_square - print a square
 * @size: size pf the square
 */

void print_square(int size)
{
	int height, width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
				_putchar('\n');
			}
		}
	}

	_putchar('\n');
}
