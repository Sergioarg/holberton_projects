#include "holberton.h"

/**
 * _prime - check if the number is prime
 * @number: is the number to validate
 * @divisor: is the divisor number to take
 * Return: the result of whether it is prime or not
 */
int _prime(int number, int divisor)
{

	if (number / 2 < divisor)
	{
		return (1);
	}
	if (number % divisor == 0)
	{
		return (0);
	}
	return (_prime(number, divisor + 1));
}

/**
 * is_prime_number - returns if the input integer is a prime number
 * @n: is the int in which it validates if it is palindrome
 * Return: the result of the prime numbers
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, 2));
}
