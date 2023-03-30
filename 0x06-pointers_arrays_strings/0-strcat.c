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
int main(void)
{
        char s1[98] = "Hello ";
        char s2[] = "World!\n";
        char *ptr;

        printf("%s\n", s1);
        printf("%s", s2);
        ptr = _strcat(s1, s2);
        printf("%s", s1);
        printf("%s", s2);
        printf("%s", ptr);
        return (0);
}

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