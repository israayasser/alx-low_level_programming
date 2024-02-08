#include "main.h"

/**
 * get_bit - gets the bit at index
 * @n: The number to index
 * @index: the bit to get
 *
 * Return: The bit state or -1 on error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
