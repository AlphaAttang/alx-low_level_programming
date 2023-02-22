#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 */


void times_table(void)
{
	int num, multinum, prodnum;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multinum = 1; multinum <= 9; multinum++)
		{
			_putchar(',');
			_putchar(' ');

			prodnum = num * multinum;

			if (prodnum <= 9)
				_putchar(' ');
			else
				_putchar((prodnum / 10) + '0');

			_putchar((prodnum % 10) + '0');
		}
		_putchar('\n');
	}
}
