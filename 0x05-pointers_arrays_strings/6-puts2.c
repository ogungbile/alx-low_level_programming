#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @s: A pointer to a char that will be changed
 *
 * Return: void which means our answer is correct
 */
void puts2(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
		_putchar(s[a]);
		}
	}
	_putchar('\n');
}
