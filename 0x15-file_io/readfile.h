#ifndef READFILE_H
#define READFILE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
static char *create_buffer(const char *file);
static void close_file(int fd);
int cp(const char *src_file, const char *dest_file, bool overwrite);




#endif
