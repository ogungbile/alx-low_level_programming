#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @s: A pointer to a char that will be changed
 *
 * Return: void which means our answer is correct
 */
void puts2(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i = i + 2;
	}
	_putchar('\n');
}
