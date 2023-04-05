#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */


int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Checks if a number is divisible.
 * @n: The number to be checked.
 * @div: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */

int is_prime_helper(int n, int div)
{
	if (n % div == 0)
	{
		return (0);
	}

	if (div > _sqrt_recursion(n))
	{
		return (1);
	}

	return (is_prime_helper(n, div + 1));
}
