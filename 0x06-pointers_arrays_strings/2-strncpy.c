#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{

        int i;
        int len;

        i = 0;
        len = strlen(src);

        if (src == NULL || dest == NULL || n == 0)
        {
                return dest;
        }

        while (i < n && src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }

        while (i < n)
        {
                dest[i] = '\0';
                i++;
        }

        return (dest);
}