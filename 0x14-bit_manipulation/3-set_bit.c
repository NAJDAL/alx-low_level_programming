#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a specified index.
 * @n: A pointer to the decimal number to modify.
 * @index: The index position to change, starting from 0.
 * Return: 1 if the operation succeeded, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
