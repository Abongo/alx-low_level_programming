#include "main.h"
/**
 * _abs - Entry point
 * @c: alphabet -make the alphabet
 * Return: Absolute number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
