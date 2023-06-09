#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy -prints elements of an array of integers, followed by a new line.
 * @dest: is number or index.
 * @src: is the pointer to the char.
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
        int i;
        int n;

        i = 0;
        n = strlen(src);

        if (src == NULL || dest == NULL)
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
