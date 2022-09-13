#include <unistd.h>

/**
 * print_alphabet - prints the alphabet in lowercass with ending new line
 *
 * Return: void, and prints the alphabet on the standard output
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch)
	}
	putchar('\n');
	return (0);
}
