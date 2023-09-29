#include "main.h"

/**
 * binary_to_uint - Convert a binary number represented as a string to an
 * unsigned integer.
 * @b: A pointer to the binary string.
 *
 * Return: The converted decimal number, or 0 if there is an unconvertible character.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, power = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			total += power;
	}

	return (total);
}
