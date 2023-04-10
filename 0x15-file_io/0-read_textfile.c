#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - read file content and print to POSIX stdout
 * @filename: name of file
 * @letters: number of letters to print
 *
 * Return: Number of letter could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	char *buffer;
	ssize_t fc, wr;

	if (filename == NULL)/*check if filename is null*/
		return (0);

	buffer = malloc(sizeof(*buffer) * letters);/*memory for characters*/
	if (buffer == NULL)
		return (0);

	fl = open(filename, O_RDONLY);/*open filein read only mode*/
	if (fl == -1)
	{
		free(buffer);
		close(fl);
		return (0);
	}

	fc = read(fl, buffer, letters);/*read file content*/
	if (fc == -1)
	{
		free(buffer);
		close(fl);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, fc);/*print file content to stdout*/

	if (wr == -1 || wr != fc)
	{
		free(buffer);
		close(fl);
		return (0);
	}

	close(fl);
	free(buffer);
	return (wr);
}
