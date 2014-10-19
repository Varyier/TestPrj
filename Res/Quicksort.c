/* File name: QUICKSORT.C
 * Purpose: Quicksort algorithm implementation.
 *          For integer arrays.
 * Programmer: Anisimov V. Andrey
 */

void quicksort1 (int *arr, int cnt)
{
	int i=0, j=cnt-1, m=cnt/2;

	while (i<j)
	{
		while (arr[i] < arr[m])
			i++;
		while (arr[j] > arr[m])
			j--;
	}
}
 
void quicksort (int *arr, int cnt)
{
}