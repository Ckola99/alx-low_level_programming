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
int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

for (i = 0; i < 10; i++)
{
printf("%i", num[i]);
}
printf("\n");
return (0);
}
