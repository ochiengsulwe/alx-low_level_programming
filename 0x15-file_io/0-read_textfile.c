#include "main.h"
#include <sys/stat.h>
/**
 * read_textfile - reads a text file and prints it to
 *	the POSIX standard output.
 * @filename: file to be read from.
 * @letters: the number of letters it should read and print.
 * Return: if filename in NULL returns 0,
 * if write fals or does not write the expected amount of bytes,
 *	returns 0,
 * if the file cannot be opened or read, it returns 0,
 * else returns the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_stream, written_stream;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0644);
	if (fd == -1)
	{
		/*perror("We apparently encountered an error");*/
		return (0);
	}
	/* allocate space for the read bytes */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	/* read from filename */
	read_stream = read(fd, buffer, letters);
	if (read_stream == -1)
	{
		/*perror("Error reading from file");*/
		close(fd);
		return (0);
	}
	written_stream = write(STDOUT_FILENO, buffer, read_stream);
	if (read_stream == -1 || written_stream != read_stream)
	{
		/*perror("An error occured");*/
		close(fd);
		return (0);
	}
	close(fd);
	return (written_stream);
}
