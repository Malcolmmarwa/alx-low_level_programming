#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	unsigned int nbits;

	for (nbits = 0; a || b; a >>= 1, b >>= 1)
	{
		if ((a & 1) != (b & 1))
			nbits++;
	}

	return (nbits);
}
