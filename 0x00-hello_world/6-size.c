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


	printf("Size of a char: %zu byte(s)", sizeof(Char));
	printf("Size of a int: %zu byte(s)", sizeof(Int));
	printf("Size of a long int: %zu byte(s)", sizeof(Longint));
	printf("Size of a long long int: %zu byte(s) ", sizeof(Longlong));
	printf("Size of a float: %zu byte(s)", sizeof(Float)) ;

	return (0);
}
