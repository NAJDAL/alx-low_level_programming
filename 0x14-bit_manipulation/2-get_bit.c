#include "main.h"
#include <stdio.h>

/**
 * get_bit - Get the value of a bit at a specified index.
 * @n: The number to evaluate.
 * @index: The index (starting from 0) of the bit to retrieve.
 * Return: The value of the bit at the given index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
