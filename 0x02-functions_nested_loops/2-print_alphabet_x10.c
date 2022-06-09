#include "main.h"                                                               
/**                                                                              *
 *  * printing lowercase of the alphabet                                     
 *  *
 *   *                                                                           *
 *    */
void print_alphabet_x10(void)
{
       	int b, c;
	for (c = 1 ; c <=10 ; c++)
	{
	for (b = 'a' ; b <= 'z' ; b++ )
	{ 
	_putchar(b);	}
       	_putchar ('\n');
	}
}
