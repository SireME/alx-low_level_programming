#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#define BUFFER_SIZE 1024

/**
 * main - copy one file to another
 * @argc: number of arguments
 * @argv: vector of elements
 *
 * Return: success or error message
 */

int main(int argc, char **argv)
{
	int file_from, file_to, read_count, write_count, close_status;
	char buffer[BUFFER_SIZE];
	mode_t mode;

	/* Check number of arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	/* Open source file */
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Check destination file existence and set permissions */
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (access(argv[2], F_OK) == 0)
		mode = (mode_t) (mode | S_IWUSR | S_IWGRP | S_IWOTH);

	/* Open destination file */
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}

	/* Copy file content */
	while ((read_count = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_count = write(file_to, buffer, (ssize_t) read_count);
		if (write_count != read_count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(98);
		}
	}

	/* Check read error */
	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		close(file_to);
		exit(98);
	}

	/* Close files */
	close_status = close(file_from);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		close(file_to);
		exit(100);
	}
	close_status = close(file_to);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (1);
}
