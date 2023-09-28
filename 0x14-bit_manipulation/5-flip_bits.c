#include "main.h"

/**
 * flip_bits - Calculate the number of bits needed to flip to convert
 * one number to another.
 * @n: The first number.
 * @m: The second number to convert to.
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
