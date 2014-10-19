/* File name: SORT.C
 * Purpose: Sorting implementation.
 *          For integer arrays.
 * Programmer: Anisimov V. Andrey
 */

#include "../AA5_Sort.h"

void aa5_sort (int *arr, int cnt)
{
	if (arr == NULL || cnt < 2)
		return;

	quicksort (arr, cnt);
}