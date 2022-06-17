#include "main.h"
/**
 *  _strcat -> this function is merging string
 *  @dest: first string
 *  @src: second string
 *  Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int lenh = 0, i;

	while (dest[lenh])
		lenh++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[lenh] = src[i];
		lenh += 1;
	}
	dest[lenh] = '\0';
	return (dest);
}
