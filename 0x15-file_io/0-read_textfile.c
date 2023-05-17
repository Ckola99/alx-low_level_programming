#include "readfile.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (!filename)
		return 0;

	FILE *fp = fopen(filename, "r");
	if (!fp)
		return 0;

	char *buf = malloc(letters + 1);
	if (!buf)
	{
		fclose(fp);
		return 0;
	}

	size_t nread = fread(buf, 1, letters, fp);
	buf[nread] = '\0';

	ssize_t nwritten = write(STDOUT_FILENO, buf, nread);
	if (nwritten < 0 || (size_t)nwritten != nread)
	{
		fclose(fp);
		free(buf);
		return 0;
	}

	fclose(fp);
	free(buf);
	return nread;
}

static size_t min(size_t a, size_t b)
{
	return a < b ? a : b;
}
