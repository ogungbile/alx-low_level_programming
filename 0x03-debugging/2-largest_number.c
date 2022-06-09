#include "main.h"
/**
 *
 *  * largest_number - returns the largest of 3 numbers
 *
 *   * @a: first integer
 *
 *    * @b: second integer
 *
 *     * @c: third integer
 *
 *      * Return: largest number
 *
 *       */
int largest_number(int a, int b, int c)
{
	int largest, temp1;

	largest = a;
	if (largest < b)
	{
		temp1 = b;
		largest = temp1;
	}
	if (largest < c)
	{
		temp1 = c;
		largest = temp1;
	}
	return (largest);
}
