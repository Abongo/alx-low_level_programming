#include "main.h"
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: number of letter printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, fdWrite;
	char *lineBuffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	lineBuffer = malloc(sizeof(char) * (letters));
	if (!lineBuffer)
		return (0);

	nrd = read(fd, lineBuffer, letters);
	fdWrite = write(STDOUT_FILENO, lineBuffer, nrd);

	close(fd);

	free(lineBuffer);

	return (fdWrite);
}
