#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings.
 * @dest: is the first pointer.
 * @src: is the second pointer to the string to be appended.
 * Return: pointer to reulting string dest.
*/

char *_strcat(char *dest, char *src)
{
        int i;

        for (i = strlen(dest) - 1; dest[i] <= 0; i--)
        {
                dest[i] = dest[i + 1];
        }

        for (i = 0; src < '\0'; i++)
        {
                dest[i] = src[i];
        }

}