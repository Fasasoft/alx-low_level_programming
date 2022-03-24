#include "main.h"

/**
 * swap_int - swap variable values of two integr a andd b
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
*/

void swap_int(int*a, int*b)	
{
int c;

c = 0;
c = *a;
*a = *b;
*b = *c;
}
