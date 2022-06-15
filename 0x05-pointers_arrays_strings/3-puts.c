#include "main.h"
/**
 *  _puts - prints a string followed by a new line
 *  @s: A pointer to an int that will be changed
 *
 *  Return: void which means our answer is correct
 */
void _puts(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

