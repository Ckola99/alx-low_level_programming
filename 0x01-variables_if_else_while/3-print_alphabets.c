#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char alpha[26] = {"abcdefghijklmnopqrstuvwxyz"};
char ALPHA[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char *new_line = "\n";

for (i = 0; i < 26; i++)
{
    putchar(alpha[i]);
}

for (i = 0; i < 26; i++)
{
    putchar(ALPHA[i]);
}
putchar(*new_line);
return (0);
}
