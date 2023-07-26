#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int k;
	int h;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	h = 0;
	while (src[h] != '\0')
	{
		dest[k] = src[h];
		k++;
		h++;
	}

	dest[k] = '\0';
	return (dest);
}
