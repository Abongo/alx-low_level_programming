#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: print_alphabet -make the alphabet
 * Return: for positive num, -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}

	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
