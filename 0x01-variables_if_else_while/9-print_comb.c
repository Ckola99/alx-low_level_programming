#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
    putchar(num + '0');
    if(num == 9)
    {
    return 0;
    }
    putchar(',');
    putchar(' ');
}
return (0);
}
