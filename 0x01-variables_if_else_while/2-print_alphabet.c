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
char alpha[27] = {"abcdefghijklmnopqrstuvwxyz"};

for (i = 0; i < 27; i++)
{
	putchar(alpha[i]);
}

return (0);
}
