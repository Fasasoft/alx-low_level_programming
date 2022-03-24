#include "main.h"

/**
 * swap_int - swap variable values of two integr a andd b
 * @a: pointer to an int that will be updated
 * @b: pointer to an int that will be updated 
 * Return: void that means our answer is correct
*/

void swap_int (int *a, int *b)	
{
int c;

 c = *a;
*a = *b;
*b = c;
}
