#include <stdio.h>                                                              
/**                                                                          
 * main -Entry point                                                            
 * Return:Always 0 (Success)                                                    
 */                                                                             
int main(void)                                                        
{
	char ch;
	char chc;
       	for (ch = 'a' ; ch <= 'z' ; ch++)
        {
        putchar(ch);
       	}
	for (chc = 'A' ; chc <= 'Z' ; chc++)
        {
        putchar(chc);
	}
        putchar('\n');
	return (0);
}
