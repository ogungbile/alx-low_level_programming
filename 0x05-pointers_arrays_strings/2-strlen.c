#include "main.h"

/**
 *  -length of a string
 *  Return :int that means our ans is right
 */

int _strlen(char *s)
{
	int u;
	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return(u);
}
