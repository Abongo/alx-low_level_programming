#include "main.h"
#include <stdio.h>
/**
 * create_file - Creates a new file
 *
 * @filename: Param description
 *
 * @text_content: Param description
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int fdWrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	fdWrite = write(fd, text_content, nletters);

	if (fdWrite == -1)
		return (-1);

	close(fd);

	return (1);
}
