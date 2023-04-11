#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: content to append
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl, len, wr;

	if (filename == NULL) /* check if filename is null */
		return (-1);

	/* open file in append mode and write text content */
	fl = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)/*if text_content is null = empty file*/
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	if (fl == -1) /* file open failure */
		return (-1);

	if (text_content == NULL) /* if text content null management */
	{
		close(fl);
		return (1);
	}

	wr = write(fl, text_content, len); /* write text_content to file */

	if (wr == -1) /* failure to write */
	{
		close(fl);
		return (-1);
	}

	close(fl);
	return (1);
}
