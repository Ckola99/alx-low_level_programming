#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main - start of the code.
 *
 * Return: (0) if success.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i == 100)
		{
			break;
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
