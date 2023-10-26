#include "main.h"

/**
 * flip_bits - counts the number bits to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int today;
	unsigned long int tomorrow = n ^ m;

	for (j = 63; j >= 0; i--)
	{
		today = tomorrow >> j;
		if (today & 1)
			count++;
	}

	return (count);
}
