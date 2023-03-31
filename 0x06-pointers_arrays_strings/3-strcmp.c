#include "main.h"
#include "stdio.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: Positive byte difference if s1 > s2
 *         0 if s1 = s2
 *         Negative byte difference if s1 < s2
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}

int _strcmp(char *s1, char *s2)
{
        int i;

        for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
        {
                if (s1[i] == s2[i])
                {
                        return (0);
                }

                if (s1[i] < s2[i])
                {
                        return (s1[i] - s2[i]);
                }

                if (s1[i] > s2[i])
                {
                        return (s1[i] - s2[i]);
                }
        }
        return (0);
}