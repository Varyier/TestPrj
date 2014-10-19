/* File name: SELECTIONSORT.C
 * Purpose: Selection sort algorithm implementation.
 *          For integer arrays.
 * Programmer: Anisimov V. Andrey
 */

#include <stdlib.h>

#include "Swap.h"
#include "Selectionsort.h"

void selection_sort (int *arr, int cnt)
{
	int i, j, m;

	if (arr == NULL || cnt < 2)
		return;

	for (i=0; i<cnt; i++)
	{
		for (m=i, j=i+1; j<cnt; j++)
		{
			if (arr[j] > arr[m])
				m=j;
		}
		swap (arr+i, arr+m);
	}
}