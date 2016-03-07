/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	if (Arr == NULL || len < 0)
		return NULL;
	int i, pos1 = 0, pos2 = 0, temp = 0;
	bool found = false;
	for (i = 0; i < 5; i++)
	{
		if ((Arr[i]>Arr[i + 1]) && (found == false))
		{
			pos1 = i;
			found = 10;
		}
		if ((Arr[i]<Arr[i - 1]) && (found != false))
			pos2 = i;
	}
	temp = Arr[pos1];
	Arr[pos1] = Arr[pos2];
	Arr[pos2] = temp;

	return Arr;
}