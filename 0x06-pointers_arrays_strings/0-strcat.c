#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strcat - concatenates two strings.
 * @dest: is the first pointer.
 * @src: is the second pointer to the string to be appended.
 * Return: pointer to reulting string dest.
 */

char *_strcat(char *dest, char *src)
{
        int i;
        int n;
        int len_dest;
        int len_src;

        len_dest = strlen(dest);
        len_src = strlen(src);
        n = len_dest + len_src + 1;

        for (i = 0; i < len_src; i++)
        {
                dest[len_dest + i] = src[i];
        }
        dest[n - 1] = '\0';
        return (dest);
}
