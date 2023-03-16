#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Char;
	int Int;
	long int Longint;
	long long int Longlong;
	float Float;
	
	printf("Size of a char: %zu byte(s)\n", sizeof(Char));
	printf("Size of an int: %zu byte(s)\n", sizeof(Int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(Longint));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(Longlong));
	printf("Size of a float: %zu byte(s)\n", sizeof(Float));
	return (0);
}
