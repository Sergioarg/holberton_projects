#include "holberton.h"

/**
 * evaluatePow - Evaluate if you do the pow
 *	@possibleSqrt: Validate if the operation is possible
 *	@desired: It is the final value of the results
 * Return: Always 0.
 */

int evaluatePow(int possibleSqrt, int desired)
{
	if (possibleSqrt * possibleSqrt ==  desired)
	{
		return (possibleSqrt);
	}
	else if (possibleSqrt * possibleSqrt > desired)
	{
		return (-1);
	}
	else
	{
		return (evaluatePow(possibleSqrt + 1, desired));
	}
	return (0);
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *	@n: It is the final value of the results
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (evaluatePow(1, n));
}
