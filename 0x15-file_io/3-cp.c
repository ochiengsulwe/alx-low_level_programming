#include "main.h"
/**
 * file_copy - copies contents of src unto dest.
 * @src: the source to copy content from.
 * @dest: file to copy contents to.
 * Return: exit status 0 on success, or
 *	a none-zero int on failure.
 */
void file_copy(const char *src, const char *dest)
{
	ssize_t _read;
	int fd_src, fd_dest;
	char *buffer[1024];

	fd_src = open(src, O_RDONLY);
	if (src == NULL || fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	fd_dest = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((_read = read(fd_src, buffer, 1024)) > 0)
	{
		if (write(fd_dest, buffer, _read) != _read || fd_dest == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	if (_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (!close(fd_src))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}
	if (!close(fd_dest))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
}
/**
 * main - takes two args
 * @argc: src file.
 * @argv: dest file.
 * Return: exits with 0 on success, and
 *	none-zero on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_copy(argv[1], argv[2]);
	exit(0);
}
