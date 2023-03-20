#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void);

int main(void)
{
    print_alphabet_x10();
    return (0);
}

void print_alphabet_x10(void)
{
    int count = 0;
    char ch = 'a';

    while (count < 10)
    {
        for (ch = 'a'; ch <= 'z'; ch++)
        {
            putchar(ch);
        }
        putchar('\n');
        count++;
    }
}
