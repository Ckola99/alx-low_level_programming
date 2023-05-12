#include "readfile.h"

#define BUF_SIZE 1024

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
static char *create_buffer(const char *file)
{
	char *buffer = malloc(BUF_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
static void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * cp - Copies the contents of a file to another file.
 * @src_file: The source file.
 * @dest_file: The destination file.
 * @overwrite: If true, overwrite the destination file.
 *
 * Return: 0 on success, or an appropriate error code.
 */

int cp(const char *src_file, const char *dest_file, bool overwrite)
{
	int src_fd, dest_fd, r, w, err_code = 0;
	char *buffer;

	if (!src_file || !dest_file)
		return (97);

	src_fd = open(src_file, O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		return (98);
	}

	dest_fd = open(dest_file, O_WRONLY | O_CREAT | (overwrite ? O_TRUNC : O_EXCL), 0664);
	if (dest_fd == -1)
	{
		err_code = 99;
		goto close_src_fd;
	}

	buffer = create_buffer(dest_file);
	while ((r = read(src_fd, buffer, BUF_SIZE)) > 0)
	{
		w = write(dest_fd, buffer, r);
		if (w == -1)
		{
			err_code = 99;
			goto free_buffer;
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		err_code = 98;
	}

free_buffer:
	free(buffer);
close_dest_fd:
	close_file(dest_fd);
close_src_fd:
	close_file(src_fd);

	return (err_code);
}
