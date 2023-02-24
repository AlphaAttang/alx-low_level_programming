#include "main.h"

/**
 * print_square - print a square
 * @size: size pf the square
 */

void print_square(int size)
{
	int width, height;

	if (size <= 0)
		_putchar('\n');

	for (width = 0; width < size; width++)
	{
		for (height = 0; height < size; height++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
