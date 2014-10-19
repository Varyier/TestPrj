/* File name: QUICKSORT.H
 * Purpose: Quicksort algorithm.
 *          For integer arrays.
 * Programmer: Anisimov V. Andrey
 */
 
 #ifndef _QUICKSORT_H_
 #define _QUICKSORT_H_
 
/* Quicksort function. 
 * Parameters:
 * 'arr' - pointer to first element of the array;
 * 'cnt' - array elements count.
 */
void quicksort (int *arr, int cnt);

/* Quicksort function (one iteration). 
 * Parameters:
 * 'arr' - pointer to first element of the array;
 * 'cnt' - array elements count.
 */
void quicksort1 (int *arr, int cnt);
 #endif