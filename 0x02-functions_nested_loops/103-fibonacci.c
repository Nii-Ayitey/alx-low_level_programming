#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int num1, num2, final, total;

	num1 = 1;
	num2 = 2;
	final = total = 0;
	while (final <= 4000000)
	{
		final = num1 + num2;
		num1 = num2;
		num2 = final;
		if ((num1 % 2) == 0)
		{
			total += num1;
		}
	}
	printf("%ld\n", total);
	return (0);
}
