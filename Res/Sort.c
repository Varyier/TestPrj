/* File name: SORT.C
 * Purpose: Sorting implementation.
 *          For integer arrays.
 * Programmer: Anisimov V. Andrey
 */

#include <stdlib.h>

#include "../AA5_Sort.h"
#include "Selectionsort.h"

void aa5_sort (int *arr, int cnt)
{
	if (arr == NULL || cnt < 2)
		return;

	selection_sort (arr, cnt);
}