#include "readfile.h"

int create_file(const char *filename, char *text_content) {
    if (!filename) return -1;

    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1) return -1;

    if (text_content) {
        size_t len = strlen(text_content);
        ssize_t nwritten = write(fd, text_content, len);
        if (nwritten < 0 || (size_t)nwritten != len) {
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 1;
}
