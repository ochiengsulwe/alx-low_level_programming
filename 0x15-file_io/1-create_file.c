#include "main.h"
#include <sys/stat.h>
/**
 * create_file - creates a file.
 * @filename: file to create.
 * @text_content: file content to be written to filename.
 * Description: filename must have required permissions->rw-------
 *	if the file already exists, permissions ain't to be changed.
 * If the file exists, truncate it.
 * Return: 1 on success, or
 *	-1 on failure,
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	/*mode_t permissions = S_IRUSR | S_IWUSR;*/

	if (!(filename))
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (0);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	if (!(write(fd, text_content, strlen(text_content))) ||
			(write(fd, text_content, strlen(text_content) != strlen(text_content))))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
