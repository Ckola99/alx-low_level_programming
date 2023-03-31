#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strncat - Write a function that concatenates two strings.
 * @n: number of chars to append.
 * @src: 1st input pointer.
 * @dest: 2nd input pointer.
 * Return: pointer to new string.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
char *_strncat(char *dest, char *src, int n)
{
        int i;
        int length;
        int len_dest;
        int len_src;

        len_dest = strlen(dest);
        len_src = strlen(src);

        if (n > 0)
        {
                for (i = 0; src[i] && i < n; i++)
                {
                        dest[len_dest + i] = src[i];
                }
        }
        return (dest);
}
