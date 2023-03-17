#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char Rev_alpha;

for (Rev_alpha = 'z'; Rev_alpha >= 'a'; Rev_alpha--)
{
putchar(Rev_alpha);
}

putchar('\n');
return (0);
}
