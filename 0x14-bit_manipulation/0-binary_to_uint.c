#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	signed int ver = 0, num = 0;


	if (!b)
		return (0);

	while (b[ver] != '\0')
	{
		if (b[ver] != '0' && b[ver] != '1')
		{
			return (0);
		}

		num <<= 1;

		if (b[ver] & 1)
		{
			num += 1;
		}
		ver += 1;
	}
	return (num);
}
