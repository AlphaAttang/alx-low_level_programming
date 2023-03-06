#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: address of memory
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
