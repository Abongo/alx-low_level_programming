#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in decimal number
 * @n: number to search
 * @index: index of bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int ruks;

	if (index > 63)
		return (-1);

	ruks = (n >> index) & 1;

	return (ruks);
}
