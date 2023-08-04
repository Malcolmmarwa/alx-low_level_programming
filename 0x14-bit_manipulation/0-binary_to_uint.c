#include "main.h"

/**
 * binary_2_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_2_uint(const char *b)
{
	unsigned int un_int;
	int len, base_two;

	if (!b)
		return (0);

	un_int = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			un_int += base_two;
		}
	}

	return (un_int);
}