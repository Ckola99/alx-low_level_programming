#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy -prints elements of an array of integers, followed by a new line.
 * @dest: is number or index.
 * @src: is the pointer to the char.
 * Return: pointer to dest.
 */
int main(void)
{
    char src[98];
    char *dest;

    dest = _strcpy(src, "First, solve the problem. Then, write the code\n");
    printf("%s", src);
    printf("%s", dest);
    return (0);
}
char *_strcpy(char *dest, char *src)
{
        int i;
        i= 0;
        int n;
        n = strlen(src);

        if (src == NULL || dest == NULL)
        {
                return dest;
        }

        while (i < n && src[i])
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
