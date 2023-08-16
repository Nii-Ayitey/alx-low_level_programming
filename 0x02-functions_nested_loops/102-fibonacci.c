#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	long int num1, num2, final;

	num1 = 1;
	num2 = 2;
	printf("%ld, %ld", num1, num2);
	for (a = 0; a < 48; a++)
	{
		final = num1 + num2;
		printf(", %ld", final);
		num1 = num2;
		num2 = final;
	}
	printf("\n");
	return (0);
}
