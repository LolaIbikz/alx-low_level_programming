#include "main.h"

/**
 *prints the alphabet in lowercase with ending new line
 *
 *Return: void, and prints the alphabet on the standard output
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
