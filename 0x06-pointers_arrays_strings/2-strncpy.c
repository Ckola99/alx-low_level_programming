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

int main(void)
{
        char s1[98];
        char *ptr;
        int i;

        for (i = 0; i < 98 - 1; i++)
        {
                s1[i] = '*';
        }
        s1[i] = '\0';
        printf("%s\n", s1);
        ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
        printf("%s\n", s1);
        printf("%s\n", ptr);
        ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
        printf("%s", s1);
        printf("%s", ptr);
        for (i = 0; i < 98; i++)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", s1[i]);
        }
        printf("\n");
        return (0);
}

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