#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
	int numbers;

	for (numbers = 48; numbers < 58; numbers++)
	{
		if (numbers != 50 && numbers != 52)
			_putchar(numbers);
	}
	_putchar('\n');
}
