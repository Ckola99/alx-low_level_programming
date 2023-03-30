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

char *_strncat(char *dest, char *src, int n)
{
        int i;
        int length;
        int len_dest;
        int len_src;

        len_dest = strlen(dest);
        len_src = strlen(src);
        length = len_dest + len_src + 1;

        char *ptr = calloc(length, sizeof(char));

        for (i = 0; i < len_dest; i++)
        {
                ptr[i] = dest[i];
        }

        if (n > 0)
        {
                for (i = 0; i < n; i++)
                {
                        ptr[len_dest + i] = src[i];
                }
        }
        return ptr;
}
