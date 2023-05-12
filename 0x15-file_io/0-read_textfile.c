#include "main.h"
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
	ssize_t output;
	/*char buffer[sizeof(letters)];*/
	FILE *fd;

	fd = fopen("filename", "r");
	if (fd == NULL)
	{
		perror("An error occurred when trying to access file");
		return (0);
	}
	if (filename == NULL)
	{
		perror("File is empty");
		return (0);
	}
	output = write(1, filename, sizeof(letters));
	if (output == -1)
	{
		perror("Some error just occured");
		return (0);
	}
	return (output);
}
