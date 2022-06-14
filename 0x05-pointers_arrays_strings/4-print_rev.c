#include "main.h"
/**
 *  print_rev - print a string in the reverse order
 *   @s: A pointer to an int that will be changed
 *
 *   return: void which means our answer is right
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
