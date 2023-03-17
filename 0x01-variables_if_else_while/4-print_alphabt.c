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
char alpha[24] = {"abcdfghijklmnoprstuvwxyz"};
char *new_line = "\n";

for (i = 0; i < 24; i++)
{
putchar(alpha[i]);
}

putchar(*new_line);
return (0);
}
