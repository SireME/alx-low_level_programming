#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>

/**
 * create_file - create a file
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: Number of letter could read and print
 */

int create_file(const char *filename, char *text_content)
{
	int fl, len = strlen(text_content);
	ssize_t wr;
	mode_t mode;
	struct stat sts;

	if (filename == NULL)/*check if filename is null*/
		return (0);

	mode = 0600; /*check existence of file and modify permissions accor*/
	if (stat(filename, &sts) == 0)
		mode = sts.st_mode & 0777;

	/*open or create file if it not in existence and set permissions 0600*/
	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (text_content == NULL)/*if text_content is null = empty file*/
	{
		close(fl);
		return (-1);
	}

	if (fl == -1)/*file creation failure*/
	{
		close(fl);
		return (-1);
	}

	wr = write(fl, text_content, len);/*write text_content to file*/

	if (wr == -1)/*failure to write*/
	{
		close(fl);
		return (-1);
	}

	close(fl);
	return (1);
}
