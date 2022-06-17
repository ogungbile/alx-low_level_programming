#include "main.h"
#include <string.h>
/**
 * _strncpy -> for copying string purposes
 * @dest: args 1
 * @src: args 2
 * @n: args 3
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

