#include "main.h"

/**
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int string[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, size;

	size = sizeof(string) / sizeof(int);

	for (count = 0; count < size; count++)
	{
		_putchar(string[count]);
	}

	_putchar('\n');
	return (0);
}
