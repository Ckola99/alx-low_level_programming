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
        int len_dest;

        len_dest = strlen(dest);

        if (n > 0)
        {
                for (i = 0; src[i] && i < n; i++)
                {
                        dest[len_dest + i] = src[i];
                }
        }
        return (dest);
}
