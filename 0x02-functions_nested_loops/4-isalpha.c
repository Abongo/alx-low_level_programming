#include "main.h"
/**
 * _isalpha - Entry point
 * @c: character check
 * Return: 1 for aphabetic character or 0 for any
 */
int _isaplha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
