#include "main.h"
#include <stdio.h>

/**
 * _strcpy -prints elements of an array of integers, followed by a new line.
 * @dest: is number or index.
 * @src: is the pointer to the char.
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
        int i;

        for (i = 0; src[i] < '\0'; i++)
        {
                dest[i] = src[i];
        }

        return (dest);
}
