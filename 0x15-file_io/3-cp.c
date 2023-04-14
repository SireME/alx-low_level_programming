#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
/**
 * close_and_read - close files and repots errors
 * @read_count: keep track of bytes read
 * @file_from: file to read from
 * @file_to: file to copy from
 * @firstf: first file name
 *
 * Return: nothing
 */
void close_and_read(int read_count, int file_from, int file_to, char *firstf)
{
	/* Check read error */
	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", firstf);
		close(file_from);
		close(file_to);
		exit(98);
	}

	/* Close files */
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		close(file_to);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
}
/**
 * main_copy - function to carry out copy operation
 * @read_count: keep track of bytes read
 * @ffrom: file to read from
 * @fto: file to copy to
 * @buff: buffer
 * @sf: second file name
 *
 * Return: nothing
 */

void main_copy(int read_count, int ffrom, int fto, char *buff, char *sf)
{
	int write_count;

	/* Copy file content */
	while ((read_count = read(ffrom, buff, BUFFER_SIZE)) > 0)
	{
		write_count = write(fto, buff, read_count);
		if (write_count != read_count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", sf);
			close(ffrom);
			close(fto);
			exit(98);
		}
	}
}

/**
 * main - copy one file to another
 * @argc: number of arguments
 * @argv: vector of elements
 *
 * Return: success or error message
 */

int main(int argc, char **argv)
{
	int file_from, file_to, read_count = 0;
	char buffer[BUFFER_SIZE];
	mode_t mode = 0644;
	struct stat sts;

	if (argc != 3)/* Check number of arguments */
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);/* Open source file */
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (stat(argv[2], &sts) == 0)/*file permissions*/
		mode = sts.st_mode & 0777;

	/* Open destination file */
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}

	main_copy(read_count, file_from, file_to, buffer, argv[2]);
	close_and_read(read_count, file_from, file_to, argv[1]);

	return (0);
}
