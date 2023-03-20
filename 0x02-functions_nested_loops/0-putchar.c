#include <main.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char ch[8] ={"_putchar"};

	for (i = 0; i < 9; i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
