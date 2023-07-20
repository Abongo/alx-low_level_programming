#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the code
 *@x: the number to be checked
 * Return: Always 0.
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
