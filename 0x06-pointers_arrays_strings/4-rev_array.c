#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Return: no return.
 */

void reverse_array(int *a, int n)
{
	int y, z, temp;

	for (y = 0; y < n - 1; y++)
	{
		for (z = y + 1; z > 0; z--)
		{
			temp = *(a + z);
			*(a + z) = *(a + (z - 1));
			*(a + (z - 1)) = temp;
		}
	}
}
