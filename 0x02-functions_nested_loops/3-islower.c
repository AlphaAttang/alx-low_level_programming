#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: Check character
 *
 * Return: Return 1 if true 0 otherwise
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
