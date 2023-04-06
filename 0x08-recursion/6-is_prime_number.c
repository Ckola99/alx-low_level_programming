#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, 1));
	}
}

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	else if (root >= num / 2)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(num, root + 1));
	}
}

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
