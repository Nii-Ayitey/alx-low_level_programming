#include "main.h"
#include <stdio.h>

/**
 * main - check my code for.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "wworld of this";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
