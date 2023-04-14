#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * multiply - Multiplies two positive numbers represented
 *     as strings and prints the result.
 *
 * @param num1 A string representing the first number.
 * @param num2 A string representing the second number.
 */
void multiply(char *num1, char *num2);

/**
 * The main function of the program.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of strings containing the command-line arguments.
 * @return Returns 0 on success, and a non-zero value on failure.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return 98;
	}
	char *num1;
	char *num2;

	num1 = argv[1];
	num2 = argv[2];

	int i;
	for (i = 0; i < strlen(num1); i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	for (i = 0; i < strlen(num2); i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	multiply(num1, num2);
	return (0);
}

/**
 * Multiplies two positive numbers represented as strings and prints the result.
 *
 * multiply - This function implements the "long multiplication"
 *      algorithm to multiply two
 * positive numbers represented as strings.
 *     It first calculates the lengths of
 * the two input strings, and allocates
 *     memory for the result array using calloc.
 * It then iterates through the digits
 *     of the two input strings, and computes
 * their product using elementary school multiplication.
 *     The product is added
 * to the appropriate positions in the result array,
 *     and any carry-over is
 * propagated to the next digit.
 *    Finally, the function removes any leading zeros
 * from the result array, and prints the remaining digits.
 *
 * @param num1 A string representing the first number.
 * @param num2 A string representing the second number.
 */

void multiply(char *num1, char *num2)
{
	int len1;
	int len2;
	int *result;

	len1 = strlen(num1);
	len2 = strlen(num2);

	result = calloc(len1 + len2, sizeof(int));

	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			int digit1, digit2, product;
			int pos1, pos2, sum;


			digit1 = num1[i] - '0';
			digit2 = num2[j] - '0';

			product = digit1 * digit2;

			pos1 = i + j;
			pos2 = i + j + 1;

			sum = product + result[pos2];
			result[pos1] += sum / 10;
			result[pos2] = sum % 10;
		}
	}

	int i = 0;
	while (i < len1 + len2 && result[i] == 0)
	{
		i++;
	}
	if (i == len1 + len2)
	{
		printf("0\n");
	}
	else
	{
		for (; i < len1 + len2; i++)
		{
			printf("%d", result[i]);
		}
		printf("\n");
	}
	free(result);
}
