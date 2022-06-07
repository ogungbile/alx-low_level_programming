#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int l_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_num = n % 10;
	/* your code goes there */
	if (l_num > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, l_num);
	}
	else if (l_num < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_num);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, l_num);
	}
	return (0);
}
