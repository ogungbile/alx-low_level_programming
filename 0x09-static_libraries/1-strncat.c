#include "main.h"
#include <string.h>
/**
 * _strncat -> function to merge some characters
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

