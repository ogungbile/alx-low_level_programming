
#include "main.h"
/**
 *
 *  * main - check the code.
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */
int _isupper(int c);
int _putchar(char c);
int main(void)
{
	char c;

	c = 'A';
	_putchar(c);
	_putchar(':');
	_putchar(' ');
	_putchar(_isupper(c));
	_putchar('\n');
	c = 'a';
	_putchar(c);                                                           
	_putchar(':');
	_putchar(' ');
	_putchar(_isupper(c));
	_putchar('\n');

	return (0);
}
