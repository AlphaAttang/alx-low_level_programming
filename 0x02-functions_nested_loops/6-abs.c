#include "math.h"

/**
 * _abs - computes the absolute value of an integer
 * @a: integer to be inputed
 * Return: The absolute value of the integer
 */

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-a);
}
