/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>
int binarySearch(int *, int, int);
int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	if (Arr == NULL || len < 0)
		return NULL;
	int *ptr = (int *)realloc(Arr, sizeof(len + 1));
	int pos, i;
	pos = binarySearch(Arr, len, num);
	for (i = len; i >= pos; i--)
	{
		Arr[i] = Arr[i - 1];
	}
	Arr[pos] = num;
	return Arr;
}
int binarySearch(int *arr, int length, int num)
{
	int low = 0, mid;
	int high = length - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (arr[mid] == num)
			return mid;
		if (arr[mid]>num)
			high = mid - 1;
		else
			low = mid + 1;
	}
}