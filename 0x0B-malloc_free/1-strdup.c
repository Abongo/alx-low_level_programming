nclude <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  * _strdup - duplicate to new memory space alloc
 *   * @str: char
 *    * Return: 0
 *     */
char *_strdup(char *str)
{
		char *kkk;
			int j, r = 0;

				if (str == NULL)
							return (NULL);
					j = 0;
						while (str[j] != '\0')
									j++;

							kkk = malloc(sizeof(char) * (j + 1));

								if (kkk == NULL)
											return (NULL);

									for (r = 0; str[r]; r++)
												kkk[r] = str[r];

										return (kkk);
}
