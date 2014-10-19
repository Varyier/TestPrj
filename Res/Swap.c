/* File name: SWAP.C
 * Purpose: Swap algorithm implementation.
 *          For integers.
 * Programmer: Anisimov V. Andrey
 */

#include <stdlib.h>

void swap (int *a, int *b)
{
	int c;
 
	if (a == NULL || b == NULL)
		return;
	
	c = *a;
	*a = *b;
	*b = c;
}