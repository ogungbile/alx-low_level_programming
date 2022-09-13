#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int b, c;

	for (c = 1 ; c <= 10 ; c++)
	{
	for (b = 'a' ; b <= 'z' ; b++)
	{
		_putchar(b);
	}
	_putchar ('\n');
	}
}
