#include "main.h"
/**
 * append_text_to_file - appends text at the end of file
 * @filename: the file to append to.
 * @text_content: the content to append.
 * Description: file not created if does not exist.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t written_bytes;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (fd == -1)
		return (-1);
	if (!(text_content))
	{
		close(fd);
		return (1);
	}
	/*fseek(filename, -1, SEEK_END);*/
	written_bytes = write(fd, text_content, strlen(text_content));
	if (written_bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
