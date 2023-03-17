#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char Hex[16] = {"0123456789abcdef"};

for (int i = 0; i < 16; i++)
{
    putchar(Hex[i]);
}

putchar('\n');
return (0);
}
